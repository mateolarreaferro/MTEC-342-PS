#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component, juce::Slider::Listener
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void sliderValueChanged(juce::Slider* slider) override;
    
private:
    //==============================================================================
    // Your private member variables go here...
    //Background Colour Slider
    juce::Slider backgroundSlider;
    juce::Colour backgroundColor;
    
    //New Sliders
    
    //Text Color Slider
    juce::Slider textSlider;
    juce::Colour textColour;
    
    //Font Size Slider
    juce::Slider fontSizeSlider;
    juce::Font fontSize;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
