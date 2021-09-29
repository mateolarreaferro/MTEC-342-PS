//Problem 1.1
//Mateo Larrea
//MTEC-342

#include <iostream> //equivalent to <stdio.h>

int main(){

    //Asks the user to enter an integer number and store it in an int named data using std::cin.
    int data;

    std::cout << "Please enter an integer: \n";

    std::cin >> data; //Stores input into data


    std::cout << "The number " << data << " in decimal is: \n" //Outputs the entered decimal
    "\t-0" << std::oct << data << " in octal \n" //Formats and outputs data in octal
    "\t-0x" << std::hex << data << " in hex \n"; //Formats and outputs data in hexadecimal

    return 0; //Ends program
}