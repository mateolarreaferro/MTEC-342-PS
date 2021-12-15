# DESIGN

##### Mateo Larrea Ferro 
##### Akito van Troyer's MTEC-342

## Sweet Touch: OSC Controller and Synth




##*Structure*

The system has three different aspects: OSC Sender, Multitouch, and Synth. 

1. OSC Sender: It sends X and Y finger coordinates to an OSC receiver. 
2. Multitouch: Finger class that allows the user to use up to 10 fingers at the same time. All of their positions can be tracked. 
3. Synth: It is a low frequency oscillator with a Low Pass Filter that allows the user to feel the touch without necessarily relying on the visual. 

##*Inspiration*

Iannis Xenakis [UPIC 2](https://www.youtube.com/watch?v=lNPWub-MNxg): The notion of physically interacting with the sound. Composing through gesture.

Doga Buse Cavdir's ["Felt Sound"](https://www.dogacavdir.com/feltsound): Using very low frequencies to enable other non-visual interactions with the interface. 

Hexler's Touch OSC: Using touch to send OSC messages

##*Implementation*

I utilized the MultiTouch project as a template to implement the rest of the project. Mainly, the implementation was about tuning some of the existing parameters (in the synth class), implementing the OSC protocol, making sublte changes to the aesthetics, and creating simple functions to return the data needed (coordinates). 






