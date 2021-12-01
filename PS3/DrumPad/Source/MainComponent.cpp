#include "MainComponent.h"

// Use LOGD to print something in Android logcat
#if JUCE_ANDROID
#include <android/log.h>
#define  LOG_TAG "JUCE"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#endif

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

    // Change block size to minimize delay for tapping
    juce::AudioDeviceManager::AudioDeviceSetup setup = deviceManager.getAudioDeviceSetup();
    setup.bufferSize = 64;
    
    
    // Set Slider
    volume.setRange(0.0f, 1.0f, 0.01f);
    volume.setValue(0.5f);
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    createPads(); //File is Loaded
    
    
}

void MainComponent::getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill)
{
    for (int i = 0; i < pads.size(); ++i)
    {
        pads[i]->getNextAudioBlock (bufferToFill);
    }
}

void MainComponent::releaseResources()
{
    for (int i = 0; i < pads.size(); ++i)
    {
        pads[i]->releaseResources();
    }
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    int numColumns = 4;
    auto buttonWidth = getWidth() / numColumns;

    for (int i = 0 ; i < pads.size(); ++i)
    {
        addAndMakeVisible (pads[i]);
        pads[i]->setBounds (5 + (i % numColumns) * buttonWidth, 105 + (i / numColumns) * buttonWidth, buttonWidth - 10, buttonWidth - 10);
    }
    
    
    
    // Volume Slider
    
    
    addAndMakeVisible(volume);
    volume.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 60, 20);
//    volume.setBound(100, getHeight() - 100, getWidth() + 100, 20);
    
    

    
    
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainComponent::createPads()
{
#if JUCE_ANDROID
    juce::ZipFile apkZip (juce::File::getSpecialLocation (juce::File::invokedExecutableFile));
    auto numFiles = apkZip.getNumEntries();
    for (int i = 0; i < numFiles; ++i)
    {
        auto* entry = apkZip.getEntry (i);
        if (entry->filename.contains("assets/Sounds/"))
        {
            pads.add (new Pad (entry->filename));
        }
    }
#elif JUCE_IOS
    auto assetsDir = juce::File::getSpecialLocation (juce::File::currentExecutableFile)
                              .getParentDirectory().getChildFile ("Assets");
    auto soundDir = assetsDir.getChildFile ("Sounds");
    auto files = soundDir.findChildFiles(juce::File::TypesOfFileToFind::findFiles, false, "*.wav");
    
    // 1. Load only ONE file --> no need to change the array
    for (int i = 0; i < files.size(); ++i)
    {
        
        pads.add (new Pad (files[i].getFullPathName()));
    }
#endif
}




// Things to Do
// 1. Load only ONE file --> no need to change the array
// 2. Divive into 16 segments of the same length
// 3.

//Once the audio file is loaded into a buffer, divide it into 16 segments.
//Each buffer segment should have the same sample length.
//Copy each buffer segment into the buffer in the Pad class as you create them.
//There should be a total of 16 Pad classes created based on the buffer segments.
//Draw 16 pads on the screen and have each pad play the one of 16 segments.
//Add a volume slider at the bottom of the UI that controls the overall volume of the drum pad.
