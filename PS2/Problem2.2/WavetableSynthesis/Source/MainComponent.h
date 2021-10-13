#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::AudioAppComponent, private juce::Button::Listener, juce::Slider::Listener
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
    void buttonClicked (juce::Button* button) override;
    void sliderValueChanged(juce::Slider* slider) override;
    
private:
    //==============================================================================
    juce::dsp::ProcessorChain<juce::dsp::Oscillator<float>, juce::dsp::Gain<float>> processorChain;
    enum
    {
        oscIndex,
        gainIndex
    };

    void generateSine();
    void generateSawtooth();
    void generateSquare();
    void generateTriangle();
    
    juce::TextButton sineButton;
    juce::TextButton sawtoothButton;
    juce::TextButton squareButton;
    juce::TextButton triangleButton;

    juce::AudioVisualiserComponent oscilloscope { 2 };
    
    //Add sliders to the project to control different parameters:
    juce::Slider oscFreqSlider; //Frequency of the oscillator in the range of 100 ~ 4,000 Hz.
    juce::Slider oscAmpSlider; //Amplitude of the oscillator in the range of 0 ~ 1.
    juce::Slider samplesPerBlockSlider; //Samples per block of the oscilloscope in the range of 2 ~ 512.
    juce::Slider bufferSizeSlider; //Buffer size of the oscilloscope in the range of 2 ~ 512.
    
    //Add Labels for the sliders
    juce::Label oscFreqLabel;
    juce::Label oscAmpLabel;
    juce::Label samplesPerBlockLabel;
    juce::Label bufferSizeLabel;
    
    

    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
