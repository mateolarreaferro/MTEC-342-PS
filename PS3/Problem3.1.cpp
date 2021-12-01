//Mateo Larrea
//Problem Set 3.1
//MTEC 342: Akito van Troyer

#include <iostream>
#include <string>

//Below is an Instrument class that has a private attribute category that describe the type of 
//musical instrument (Idiophone, Chordophone, etc.):

class Instrument { // SuperClass
public:
	Instrument(std::string c) : category(c){}
	
	std::string getCategory() {
		return category;	
	}
	
private:
	std::string category;
};



// Extend the Instrument class with a class named Electrophone that holds one private 
//attribute called type that describes how a sound is produced from the instrument.

class Electrophone : public Instrument {
public:
// The constructor for the Electrophone should take the type parameter and initialize the attribute.
    Electrophone(std::string t) : type(t){
        // In the constructor, also initialize the superclass's category attribute to "Electrophone".
        getCategory("Electrophone");
    }

    // Also, create a method named getType() that returns the value of the private attribute type.
    std::string getType(){
        return type;
    }

private:
    std::string type;
};

// Once the Electrohpne class is defined, create another class named Theremin that extends 
//the Electrophone class.

// class Theramin : public Electrophone{
// public:
//     // Using the constructor, initialize the superclass's type attribute to "Oscillator".
//     Theramin(std::string o) : Oscillator(o){}


// private:
// // This class should have a private attribute named name set to the value "Theremin".
//     std::string name

//     name = Theramin;





// };











// Also, create a method named getName() that returns the value of the private attribute name. 
//Once all the classes are defined, instantiate the Theremin class in the 
//main function and print out the instrument's name, type, and category using the getter methods.

// The printout must look as described below:

//   The instrument Theremin is an Electronphone that makes sound with an Oscillator.
// std::string is a string defined in the string library.