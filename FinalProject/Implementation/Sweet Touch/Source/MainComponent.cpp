#include "MainComponent.h"
#include "Finger.h"

int MainComponent::MAX_FINGERS = 10;






void showConnectionErrorMessage(const juce::String& messageText){
    juce::AlertWindow::showMessageBoxAsync (juce::AlertWindow::WarningIcon, "Connection Error", messageText, "OK");
}

//==============================================================================
MainComponent::MainComponent()
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
    
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
     //specify osc info: IP and Port
       if (! sender.connect("10.0.0.182", 8000))
           showConnectionErrorMessage ("Error: could not connecto to port 8000");
   
    
    
    
    
    // Create all fingers
    for (int i = 0; i < MainComponent::MAX_FINGERS; ++i)
    {
        fingers.add (new Finger (getBounds()));
        fingers[i]->prepareToPlay(samplesPerBlockExpected, sampleRate, 2);
    }
    
    // Intialize processor chain
    juce::dsp::ProcessSpec spec;
    spec.sampleRate = sampleRate;
    spec.maximumBlockSize = samplesPerBlockExpected;
    spec.numChannels = 2;
    reverb.prepare (spec);
}

void MainComponent::getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill)
{
    for (auto* finger : fingers)
    {
        finger->getNextAudioBlock (bufferToFill);
    }

    juce::AudioBuffer<float> buffer = *bufferToFill.buffer;
    juce::dsp::AudioBlock<float> block (buffer);
    juce::dsp::ProcessContextReplacing<float> context (block);
    reverb.process (context);
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
    juce::Colour color  { juce::Colour::fromHSV (juce::Random::getSystemRandom().nextFloat(), 0.5f, 0.8f, 1.0f) };
    
     
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll(color);

    for(auto* finger : fingers)
    {
        if(finger->getIsTouching())
        {
            finger->draw (g);
        }
    }
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainComponent::mouseDown (const juce::MouseEvent &event)
{
    if (!fingers[event.source.getIndex()]->getIsTouching())
    {
        fingers[event.source.getIndex()]->setIsTouching (true);
        fingers[event.source.getIndex()]->setLastPoint (event.position);
        fingers[event.source.getIndex()]->pushPoint (event.position, event.pressure);
        repaint();
        fingers[event.source.getIndex()]->play();
        
        
    }
}

// OSC Sender is implemented here
void MainComponent::mouseDrag (const juce::MouseEvent& event)
{
    if (fingers[event.source.getIndex()]->getIsTouching())
    {
        
        
        juce::String oscAdressX[] = {"/juce/finger1X", "/juce/finger2X", "/juce/finger3X", "/juce/finger4X", "/juce/finger5X"};
        juce::String oscAdressY[] = {"/juce/finger1Y", "/juce/finger2Y", "/juce/finger3Y", "/juce/finger4Y", "/juce/finger5Y"};
        
        
        fingers[event.source.getIndex()]->pushPoint (event.position, event.pressure);
        
        
        // Multitouch Sender!
        for (int i = 0; i < 5; i++){
        sender.send(oscAdressX[i], fingers[i]->getPositionX());
        sender.send(oscAdressY[i], fingers[i]->getPositionY());
        }
        
       
        repaint();
        
    }
}

void MainComponent::mouseUp (const juce::MouseEvent &event)
{
    if (fingers[event.source.getIndex()]->getIsTouching())
    {
        fingers[event.source.getIndex()]->setIsTouching (false);
        fingers[event.source.getIndex()]->clearPath();
        repaint();
        fingers[event.source.getIndex()]->stop();
    }
}


