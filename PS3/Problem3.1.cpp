//Mateo Larrea
//Problem Set 3.1
//MTEC 342: Akito van Troyer

#include <iostream>
#include <string>
#include <cstdint>

// category -> Idiophone, Chordophone, etc.
// type -> how it makes sound (oscillator)


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
 // In the constructor, also initialize the superclass's category attribute to "Electrophone".
    Electrophone(std::string t) : Instrument("Electrophone"),  type(t){}

    // void getCategory(){
    //     std::cout << "Electrophone" << std::endl;
    // }


    // Also, create a method named getType() that returns the value of the private attribute type.
    std::string getType(){
        return type;
    }

private:
    std::string type;
};

// Once the Electrohpne class is defined, create another class named Theremin that extends 
// the Electrophone class.

class Theramin : public Electrophone{
public:
    // Using the constructor, initialize the superclass's type attribute to "Oscillator".
    Theramin(std::string o) : Electrophone("Oscillator"), name(o){}

    // void getType(){
    //     std::cout << "Oscillator" << std::endl;
    // }

    // Also, create a method named getName() that returns the value of the private attribute name. 
    std::string getName(){
        // std::cout << "Theramin" << std::endl;
        return name;
    }


private:
// This class should have a private attribute named name set to the value "Theremin".
    std::string name;

};


int main(){

//Once all the classes are defined, instantiate the Theremin class in the 
//main function and print out the instrument's name, type, and category using the getter methods.

    Theramin instance ("Theramin");


    //The instrument Theremin is an Electronphone that makes sound with an Oscillator.

    std::cout << "The instrument " << instance.getType() << "is an " << instance.getCategory() << "that makes sound with an " << instance.getName() << std::endl;



    return 0;




}

