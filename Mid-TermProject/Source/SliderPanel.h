#pragma once
#include <JuceHeader.h>
#include "ParameterSlider.h"

class SliderPanel : public juce::Component
{
public:
    SliderPanel (juce::String name,
                 std::vector<juce::String> parameters,
                 std::vector<float> minVals,
                 std::vector<float> maxVals,
                 std::vector<float> steps,
                 std::vector<float> defaultVals);
    
    void paint (juce::Graphics& g) override;
    void reset (float sampleRate, float rampLengthInSeconds);
    float getNextValue (int index);
    int getNumSliders ()
    {
        return sliders.size();
    }
    
private:
    juce::Label label;
    juce::OwnedArray<ParameterSlider> sliders;
};
