#pragma once

#include <JuceHeader.h>
#include "Finger.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::AudioAppComponent
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
    
    void mouseDown (const juce::MouseEvent &event) override; //Starts
    void mouseDrag (const juce::MouseEvent& event) override; //Updates
    void mouseUp (const juce::MouseEvent &event) override; //Ends
    
private:
    //==============================================================================
    juce::OwnedArray<Finger> fingers;
    int fingerCount { 0 };
    static int MAX_FINGERS;
    juce::dsp::Reverb reverb;
    
    
    // Create OSC sender
    juce::OSCSender sender;

    
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};



