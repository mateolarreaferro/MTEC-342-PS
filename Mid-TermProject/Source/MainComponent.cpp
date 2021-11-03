#include "MainComponent.h"
#include "Parameters.h"

//==============================================================================
MainComponent::MainComponent()
    : keyboardComponent(keyboardState, juce::MidiKeyboardComponent::horizontalKeyboard)
{
    // Make sure you set the size of the component after
    // you add any child components.
    setSize (800, 600);

    // Some platforms require permissions to open input channels so request that here
    if (juce::RuntimePermissions::isRequired (juce::RuntimePermissions::recordAudio)
        && ! juce::RuntimePermissions::isGranted (juce::RuntimePermissions::recordAudio))
    {
        juce::RuntimePermissions::request (juce::RuntimePermissions::recordAudio,
                                           [&] (bool granted) { setAudioChannels (granted ? 2 : 0, 2); });
    }
    else
    {
        // Specify the number of input and output channels that we want to open
        setAudioChannels (0, 2);
    }
    
    keyboardState.addListener (this);
    
    panels.add (new SliderPanel ("Distortion",
                 Parameters::distNames,
                 Parameters::distMins,
                 Parameters::distMaxs,
                 Parameters::distSteps,
                 Parameters::distDefaults));

    panels.add (new SliderPanel ("LPF",
                 Parameters::lpfNames,
                 Parameters::lpfMins,
                 Parameters::lpfMaxs,
                 Parameters::lpfSteps,
                 Parameters::lpfDefaults));

    panels.add (new SliderPanel ("Gain",
                 Parameters::gainNames,
                 Parameters::gainMins,
                 Parameters::gainMaxs,
                 Parameters::gainSteps,
                 Parameters::gainDefaults));

    panels.add (new SliderPanel ("Envelope",
                 Parameters::adsrNames,
                 Parameters::adsrMins,
                 Parameters::adsrMaxs,
                 Parameters::adsrSteps,
                 Parameters::adsrDefaults));
    
    panels.add (new SliderPanel ("Reverb",
                 Parameters::reverbNames,
                 Parameters::reverbMins,
                 Parameters::reverbMaxs,
                 Parameters::reverbSteps,
                 Parameters::reverbDefaults));
    
    panels.add (new SliderPanel ("LFO",
                 Parameters::lfoNames,
                 Parameters::lfoMins,
                 Parameters::lfoMaxs,
                 Parameters::lfoSteps,
                 Parameters::lfoDefaults));
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
    keyboardState.removeListener (this);
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    // Intialize processor chain
    juce::dsp::ProcessSpec spec;
    spec.sampleRate = sampleRate;
    spec.maximumBlockSize = samplesPerBlockExpected;
    spec.numChannels = 2;
    processorChain.prepare (spec);
    
    
    //Set OSC
    auto& osc = processorChain.template get<oscIndex>();
    osc.initialise ([] (float x)
                    {
                        return std::sin (x);
                    }, 128);
    processorChain.get<oscIndex>().setFrequency (440, true);
    
    
    
    //Set LFO
    tlfo.prepare(spec);
    //Sets LFO: tremolo
    tlfo.initialise ([] (float x) {return std::sin(x); }, 128);
    tlfo.setFrequency(2.0f);
    tlfo.prepare({spec.sampleRate / lfoUpdateRate, spec.maximumBlockSize, spec.numChannels});
    
    //Sets LFO: vibrato
    vlfo.initialise ([] (float x) {return std::sin(x); }, 128);
    vlfo.setFrequency(2.0f);
    vlfo.prepare({spec.sampleRate / lfoUpdateRate, spec.maximumBlockSize, spec.numChannels});
    
    
    // Initialize temp buffer --> to apply LFO Signal
    tempBlock = juce::dsp::AudioBlock<float>(heapBlock, spec.numChannels, spec.maximumBlockSize);
    
    
    
    auto& shaper = processorChain.get<shaperIndex>();
    shaper.functionToUse = [] (float x)
    {
        return juce::jlimit(float (-Parameters::curClip), float (Parameters::curClip), x);
    };
    
    processorChain.get<filterIndex>().setMode (juce::dsp::LadderFilterMode::LPF24);
    
    adsr.setSampleRate (sampleRate);
    adsr.reset();
    
    for (int i = 0; i < panels.size(); ++i)
    {
        panels[i]->reset(sampleRate, 1e-3);
    }
    
    
    //Oscilloscope
    oscilloscope.setNumChannels(2);
    oscilloscope.setSamplesPerBlock(2);
    oscilloscope.setBufferSize (128);
    
    
    
//        //For the LFO too
//        tlfo.prepare(spec);
//        //Sets LFO: tremolo
//        tlfo.initialise ([] (float x) {return std::sin(x); }, 128);
//        tlfo.setFrequency(2.0f);
//        tlfo.prepare({spec.sampleRate / lfoUpdateRate, spec.maximumBlockSize, spec.numChannels});
//
//        //Sets LFO: vibrato
//        vlfo.initialise ([] (float x) {return std::sin(x); }, 128);
//        vlfo.setFrequency(2.0f);
//        vlfo.prepare({spec.sampleRate / lfoUpdateRate, spec.maximumBlockSize, spec.numChannels});
//
//
//        // Initialize temp buffer --> to apply LFO Signal
//        tempBlock = juce::dsp::AudioBlock<float>(heapBlock, spec.numChannels, spec.maximumBlockSize);
        
    
}

void MainComponent::getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill)
{
    Parameters::curClip = panels[Parameters::distortionIndex]->getNextValue (Parameters::clipIndex);
    
    processorChain.get<filterIndex>().setResonance (panels[Parameters::lpfIndex]->getNextValue (Parameters::resonanceIndex));
    processorChain.get<filterIndex>().setCutoffFrequencyHz (panels[Parameters::lpfIndex]->getNextValue (Parameters::cutoffIndex));
    
    // Set reverb parameters
    auto revParam = reverb.getParameters();
    revParam.roomSize = panels[Parameters::reverbIndex]->getNextValue (Parameters::roomSizeIndex);
    revParam.wetLevel = panels[Parameters::reverbIndex]->getNextValue (Parameters::mixIndex);
    revParam.dryLevel = 1.0f - panels[Parameters::reverbIndex]->getNextValue (Parameters::mixIndex);
    revParam.width = panels[Parameters::reverbIndex]->getNextValue (Parameters::widthIndex);
    revParam.damping = panels[Parameters::reverbIndex]->getNextValue (Parameters::dampIndex);
    reverb.setParameters (revParam);
    
    // Set adsr parameters
    auto adsrParam = adsr.getParameters();
    adsrParam.attack = panels[Parameters::adsrIndex]->getNextValue (Parameters::attackIndex);
    adsrParam.decay = panels[Parameters::adsrIndex]->getNextValue (Parameters::decayIndex);
    adsrParam.sustain = panels[Parameters::adsrIndex]->getNextValue (Parameters::sustainIndex);
    adsrParam.release = panels[Parameters::adsrIndex]->getNextValue (Parameters::releaseIndex);
    adsr.setParameters (adsrParam);
    
    // Process audio
    juce::AudioBuffer<float> buffer = *bufferToFill.buffer;
    juce::dsp::AudioBlock<float> block (buffer);
    juce::dsp::ProcessContextReplacing<float> context (block);
    processorChain.process (context);
    adsr.applyEnvelopeToBuffer (buffer, 0, buffer.getNumSamples());
    reverb.process (context);
    
    //Oscilloscope
    oscilloscope.pushBuffer (*(bufferToFill.buffer));
    
    
    //LFO
    auto numSamples = bufferToFill.numSamples;
        auto output = tempBlock.getSubBlock(0, numSamples);
        output.clear();
        
        for(long pos = 0; pos < numSamples; ){
            //kEEP TRACK OF THE SUB BLOCK SIZE
            auto max = juce::jmin(numSamples - pos, lfoUpdateCounter);
            auto block = output.getSubBlock(pos, max);
            
            // process samples
            juce::dsp::ProcessContextReplacing<float> context (block);
            processorChain.process (context);
            
            // upadate sample position and lfo counter
            pos += max;
            lfoUpdateCounter -= max;
            
            //Controls LFOs
            if (lfoUpdateCounter <= 0){//apply lfos when the counter is 0 or less
                lfoUpdateCounter = lfoUpdateRate;
                
                //Set LFO Parameters
                tlfo.setFrequency(panels[Parameters::lfoIndex]->getNextValue(Parameters::Tremolo));
                vlfo.setFrequency(panels[Parameters::lfoIndex]->getNextValue(Parameters::Vibrato));
                
                auto gain = juce::jmap(tlfo.processSample(0.0f), -1.0f, 1.0f, 0.1f, 1.0f);
                
//                auto freq = juce::jmap(vlfo.processSample(0.0f), 0.0f, 10.0f, 0.1f, 1.0f );
        
                processorChain.get<gainIndex>().setGainLinear(gain);
//                processorChain.get<oscIndex>().setFrequency(freq);
                
            }
    
    
}
    // Apply processor chain to the main i/o buffer
//        juce::dsp::AudioBlock<float>(*bufferToFill.buffer).getSubBlock(bufferToFill.startSample, numSamples).add(tempBlock);
}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    auto sliderWidth = getWidth() / 4; // 4 is the max number of slider per panel
    int sliderHeight =  120; //(getHeight() - getHeight() / 8) / 3 - 20; // Up to 3 rows of panels
    
    for (int i = 0; i < panels.size(); ++i)
    {
        addAndMakeVisible(panels[i]);
    }
    
    panels[Parameters::distortionIndex]->setBounds (0, 40, sliderWidth, sliderHeight);
    panels[Parameters::lpfIndex]->setBounds (sliderWidth, 40, sliderWidth * 2, sliderHeight);
    panels[Parameters::gainIndex]->setBounds (sliderWidth * 3, 40, sliderWidth, sliderHeight);
    panels[Parameters::adsrIndex]->setBounds (0, sliderHeight + 40, sliderWidth * 4, sliderHeight);
    panels[Parameters::reverbIndex]->setBounds (0, sliderHeight * 2 + 40, sliderWidth * 4, sliderHeight);
    panels[Parameters::lfoIndex]->setBounds (0, sliderHeight * 3 + 40, sliderWidth * 4, sliderHeight);
    
    
    addAndMakeVisible (oscilloscope);
    oscilloscope.setBounds(0, sliderHeight * 4 + 40, sliderWidth * 4, sliderHeight * 2);
    
    addAndMakeVisible (keyboardComponent);
    keyboardComponent.setKeyWidth (getWidth() / 7); // Only 7 white keys
    keyboardComponent.setBounds (0,  getHeight() - getHeight() / 8 - 20, getWidth(), getHeight() / 8);
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainComponent::handleNoteOn (juce::MidiKeyboardState *source, int midiChannel, int midiNoteNumber, float velocity)
{
    processorChain.get<oscIndex>().setFrequency (juce::MidiMessage::getMidiNoteInHertz (midiNoteNumber));
    processorChain.get<gainIndex>().setGainLinear (velocity * panels[Parameters::gainIndex]->getNextValue (Parameters::levelIndex));
    adsr.noteOn();
}

void MainComponent::handleNoteOff (juce::MidiKeyboardState *source, int midiChannel, int midiNoteNumber, float velocity)
{
    adsr.noteOff();
}
