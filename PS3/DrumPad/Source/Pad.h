/*
  ==============================================================================

    Pad.h
    Created: 30 Nov 2021 7:53:10pm
    Author:  Mateo Larrea Ferro

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class Pad : public juce::ShapeButton, public juce::Button::Listener {
    
public:
    Pad(juce::String fileName); // Constructor
    void buttonClicked (juce::Button *) override; // Detects when users press on the button --> This function needs to be implemented
    void buttonStateChanged (juce::Button *) override; // This one detects when the button is pressed, not released
    
    void paint(juce::Graphics &g) override;
    
    // This is the function we are going to use to write samples into main buffer (that is played on the speaker)
    void getNextAudioBlock(const juce::AudioSourceChannelInfo& bufferToFill);
    void releaseResources();
    
private:
    void loadAudioFile(juce::String fileName); // file name is passed from constructor
    
    // For file
    juce::AudioFormatManager formatManager;
    juce::AudioBuffer<float> fileBuffer; // Hold the content of the sound file that we're opening (playbacl buffer)
    
    int position = 0; // position in the buffer --> starts from 0
    bool isPlaying = false; // it is not playing when it starts
    
    juce::Path rectPath;
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Pad) // makes sure the app doesn't crash
};

