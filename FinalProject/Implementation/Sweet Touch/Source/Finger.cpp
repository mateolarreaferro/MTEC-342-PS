

#include "Finger.h"

void Finger::pushPoint (juce::Point<float> newPoint, float pressure)
{
    currentPosition = newPoint;

    if (lastPoint.getDistanceFrom (newPoint) > 5.0f)
    {
        if (lastPoint != juce::Point<float>())
        {
            juce::Path newSegment;
            newSegment.startNewSubPath (lastPoint);
            newSegment.lineTo (newPoint);

            auto diameter = 8.0f * (pressure > 0 && pressure < 1.0f ? pressure : 1.0f);

            juce::PathStrokeType (diameter, juce::PathStrokeType::curved, juce::PathStrokeType::rounded).createStrokedPath (newSegment, newSegment);
            path.addPath (newSegment);
        }

        lastPoint = newPoint;
    }
}

void Finger::draw (juce::Graphics& g)
{
    g.setColour (color);
    g.fillPath (path);
    
}

void Finger::prepareToPlay (int samplesPerBlockExpected, double sampleRate, int numChans)
{
    synth.prepareToPlay (samplesPerBlockExpected, sampleRate, numChans);
}

void Finger::getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill)
{
    synth.setFrequency (5.0f + (currentPosition.getY() / bound.getHeight()) * 60.0f);
    synth.setCutoffFrequency (100.0f + (currentPosition.getX() / bound.getWidth()) * 100.0f);
    synth.getNextAudioBlock (bufferToFill);
    
    

}


