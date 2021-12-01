/*
  ==============================================================================

    Pad.cpp
    Created: 30 Nov 2021 7:53:10pm
    Author:  Mateo Larrea Ferro

  ==============================================================================
*/

#include "Pad.h"


// Android's printing mechanism
#if JUCE_ANDROID
#include <android/loh.h>
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#endif



Pad::Pad(juce::String fileName)
: juce::ShapeButton("", juce::Colours::white, juce::Colours::grey, juce::Colours::yellow)
{
    // Register the audio formats that come with JUCE
    formatManager.registerBasicFormats(); // now the program should be able to load aiff, wave, etc.
    
    // Load audio file
    loadAudioFile(fileName);
    
    // tell the button that this class is the listener
    addListener(this);
}

// Load Audio File

void Pad::loadAudioFile(juce::String fileName){
    std::unique_ptr<juce::InputStream> inputStream;
    
#if JUCE_ANDROID
    juce::ZipFile apkZip (juce::File::getSpecialLocation(juce::File::invokedExecutableFile));
    inputStream = std::unique_ptr<juce::InputStream>(apkZip.createStreamForEntr(apkZip.getIndexOfFileName(fileName))); // inside the zip there should be a file name
    
#elif JUCE_IOS
    juce::File file(fileName);
    inputStream = file.createInputStream();
#endif
    
    // Once the file opening has happened, create a reader to read content of file
    auto* reader = formatManager.createReaderFor(std::move(inputStream));
    if(reader != nullptr){
        // Set the size and the channel number for the audio buffer
        fileBuffer.setSize((int) reader->numChannels, (int) reader->lengthInSamples);  // how many channels in that file, and how many samples in audio file
        // Copy the file into the Buffer ***********
        // buffer, where to start in the destination buffer, number of samples, reader start sample, use reader left chan, use reader right chan
        reader->read(&fileBuffer, 0, (int) reader->lengthInSamples, 0, true, true);
    }
}




// User Interaction

void Pad:: paint(juce::Graphics& g){
    this->juce::ShapeButton::paint(g);
    rectPath.addEllipse(0, 0, 100, 100);
    setShape(rectPath,true, false, false);
}

// Keep track of Button State

void Pad::buttonStateChanged(juce::Button *button) {
    if(button->getState() == juce::Button::ButtonState::buttonDown){
        if (!isPlaying) isPlaying = true;
        
        position = 0; //starts sample from the beggining
        
    }
}

void Pad::buttonClicked(juce::Button *) {
    
}


// Playback Functionality

void Pad::getNextAudioBlock(const juce::AudioSourceChannelInfo &bufferToFill) {
    if (isPlaying){
        
        // Housekeeping Variables
        auto numInputChannels = fileBuffer.getNumChannels();
        auto numOutChannels = bufferToFill.buffer->getNumChannels();
        auto numSamples = bufferToFill.numSamples;
        
        // Go through all the channels avaialable in bufferToFill
        for(auto channel = 0; channel < numOutChannels; channel++){
            auto* channelDataIn = fileBuffer.getReadPointer(channel % numInputChannels);
            auto* channelDataout = bufferToFill.buffer->getWritePointer(channel);
            
            // Mix in sample by sample to the main buffer
            
            for (auto sample = 0; sample < numInputChannels; sample++){
                // if the reading position exceeds size of buffer, break out of for loop
                if(position + sample >= fileBuffer.getNumSamples()) break;
                channelDataout[sample] += channelDataIn[position + sample];
            }
        }
        
        // Update the audio buffer reading position
        position += numSamples;
        
        // Stop playback once the reading position reaches the enf of the buffer
        if(position >= fileBuffer.getNumChannels()){
            isPlaying = false;
        }
        
    }
}


void Pad::releaseResources() {
    fileBuffer.setSize(0, 0);
}


