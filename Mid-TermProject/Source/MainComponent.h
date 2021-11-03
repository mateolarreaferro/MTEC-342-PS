#pragma once

#include <JuceHeader.h>
#include "SliderPanel.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::AudioAppComponent, private juce::MidiKeyboardStateListener

{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    //==============================================================================
    void paint (juce::Graphics& g) override;
    void resized() override;
   
    
    void handleNoteOn (juce::MidiKeyboardState *source, int midiChannel, int midiNoteNumber, float velocity) override;
    void handleNoteOff (juce::MidiKeyboardState *source, int midiChannel, int midiNoteNumber, float velocity) override;
    
    
    
private:
    //==============================================================================
    enum
    {
        oscIndex,
        shaperIndex,
        filterIndex,
        gainIndex,
        lfoIndex
    };
    
    juce::dsp::ProcessorChain<juce::dsp::Oscillator<float>, juce::dsp::WaveShaper<float>, juce::dsp::LadderFilter<float>, juce::dsp::Gain<float>> processorChain;
    
    //Reverb
    juce::dsp::Reverb reverb;
    
    //Envelope Generator
    juce::ADSR adsr;
    
   
    //LFO
    juce::dsp::Oscillator<float> tlfo;
    //LFO Vibrato
    juce::dsp::Oscillator<float> vlfo;
    //Lfo requires the following attributes:
    long lfoUpdateRate = 100; //Runs the LFO 100 times less frequently than audio rate
    long lfoUpdateCounter = lfoUpdateRate;
    
    
    //temporary buffer
    juce::dsp::AudioBlock<float> tempBlock;
    juce::HeapBlock<char> heapBlock; //the buffer above is going to be stored here
    
    //Oscilloscope
    juce::AudioVisualiserComponent oscilloscope { 2 };
    
    //Keyboard
    juce::MidiKeyboardState keyboardState;
    juce::MidiKeyboardComponent keyboardComponent;
    
    juce::OwnedArray<SliderPanel> panels;
    
    
    //Functions to generate waves
    void generateSine();
    void generateSawtooth();
    
    
    //Buttons to Change Wave
    juce::TextButton sineButton;
    juce::TextButton sawtoothButton;
    
    

    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
