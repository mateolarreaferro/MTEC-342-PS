#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    backgroundSlider.addListener(this);
    textSlider.addListener(this);
    fontSizeSlider.addListener(this);
}

MainComponent::~MainComponent()
{
    //Remove Listeners
    backgroundSlider.removeListener (this);
    textSlider.removeListener (this);
    fontSizeSlider.removeListener (this);
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (backgroundColor);

    g.setFont (juce::Font (fontSize));
    g.setColour (textColour);
    g.drawText (":)!", getLocalBounds().reduced(20, 20), juce::Justification::centred, true);
    
    
    //Background Slider
    
    // Change knob and track color
    getLookAndFeel().setColour (juce::Slider::thumbColourId, juce::Colours::gold);
    getLookAndFeel().setColour (juce::Slider::trackColourId, juce::Colours::azure);

    // Set the text box style
    backgroundSlider.setTextBoxStyle (juce::Slider::TextBoxRight, true, 100, 20);

    // Set the size of slider
    backgroundSlider.setBounds (20, getHeight() / 2 + 50, getWidth() - 40, 20);
        
    // add the slider to the MainComponent
    addAndMakeVisible (backgroundSlider);
    
    //Add the lister to the slider. MainComponent will be the listener
    backgroundSlider.addListener (this);
    
    
    //Text Slider
    
    // Set the text box style
    textSlider.setTextBoxStyle (juce::Slider::TextBoxRight, true, 100, 20);

    // Set the size of slider
    textSlider.setBounds (20, getHeight() / 2 + 100, getWidth() - 40, 20);
        
    // add the slider to the MainComponent
    addAndMakeVisible (textSlider);
    
    //Add the lister to the slider. MainComponent will be the listener
    textSlider.addListener (this);
    
    
    
    //Font Size Slider
    
    // Set the text box style
    fontSizeSlider.setTextBoxStyle (juce::Slider::TextBoxRight, true, 100, 20);

    // Set the size of slider
    fontSizeSlider.setBounds (20, getHeight() / 2 + 150, getWidth() - 40, 20);
        
    // add the slider to the MainComponent
    addAndMakeVisible (fontSizeSlider);
    
    //Add the lister to the slider. MainComponent will be the listener
    fontSizeSlider.addListener (this);
    
    
    
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}


//Actual Changes of each slider
void MainComponent::sliderValueChanged(juce::Slider* slider){
    
    if (slider == &backgroundSlider){
    uint8_t color = slider->getValue() * 25.5;
    backgroundColor = juce::Colour(color, color, color);
    repaint();
    }
    else if (slider == &textSlider){
        
        uint8_t color = slider->getValue() * 25.5;
        textColour = juce::Colour(color, 0, 255);
        repaint();
        }
    else if (slider == &fontSizeSlider){
        fontSize = slider->getValue() * 100.0;
        repaint();
    }
}


//Start with the HelloWorld JUCE project in 03.Appearance.
//Add another slider named textSlider.
//Use this slider to change the color of the text that says "Hello, JUCE!", similar to how we change the background color.
//You can also create another juce::Colour variable called textColor to achieve this.




//Add another slider named fontSizeSlider.
//Change the font size for the text that says "Hello, JUCE!" between 10 and 50.
//You can create a float-type variable named fontSize to keep track of the slider value right below where you create the fontSizeSlider.
//Make sure to set the textbox style and bound for each added slider.
//Make sure also that the new sliders have a listener.
