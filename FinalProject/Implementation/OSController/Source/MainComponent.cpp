#include "MainComponent.h"

//==============================================================================

void showConnectionErrorMessage(const juce::String& messageText){
    juce::AlertWindow::showMessageBoxAsync (juce::AlertWindow::WarningIcon, "Connection Error", messageText, "OK");
}


MainComponent::MainComponent()
{
    setSize (600, 400);
    rotaryKnob.setRange(0.0, 1.0);
    rotaryKnob.setSliderStyle(juce::Slider::RotaryVerticalDrag);
    rotaryKnob.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 150, 25);
    rotaryKnob.setBounds(10, 10, 180, 180);
    addAndMakeVisible(rotaryKnob);
    
    rotaryKnob2.setRange(0.0, 1.0);
    rotaryKnob2.setSliderStyle(juce::Slider::RotaryVerticalDrag);
    rotaryKnob2.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 150, 25);
    rotaryKnob2.setBounds(80, 80, 300, 300);
    addAndMakeVisible(rotaryKnob2);
    
    
    
    
    // specify osc info
    if (! sender.connect("127.0.0.1", 8000))
        showConnectionErrorMessage ("Error: could not connecto to port 8000");
        
    
        
    setSize(200, 200);
    
    rotaryKnob.onValueChange = [this]{
        if (! sender.send("/juce/rotaryknob", (float) rotaryKnob.getValue()))
            showConnectionErrorMessage ("error: could not send OSC message");
    };
    
    rotaryKnob2.onValueChange = [this]{
        if (! sender.send("/juce/rotaryknob2", (float) rotaryKnob2.getValue()))
            showConnectionErrorMessage ("error: could not send OSC message");
    };
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}






