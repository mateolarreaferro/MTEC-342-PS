//Mateo Larrea
//Problem Set 2.1
//MTEC 342: Akito van Troyer

#include <iostream>
#include <cstdlib> //rand()


//Function Prototypes
// Compute the maximum, minimum, and average of the 20 numbers stored in the numbers.
void maximum(int *num);
void minimum(int *num);
void average(int *num);

int arraySize = 20;


int main(){
    
    int numbers[arraySize];

    // Generate 20 random numbers between 60 and 120 using the rand() function.
    for (int i = 0; i < arraySize; i++){
        // Store the generated numbers into an array named numbers.
        numbers [i] = rand() % 61 + 60;   // numbers in the range 60-120 

        // std::cout<< numbers[i] << "\n"; //For Debugging Purposes
    }

    average(numbers);
    maximum(numbers);
    minimum(numbers);


    return 0;
}


// Computations should be done using functions named maximum(), minimum(), and average() that take the numbers array as an input and returns nothing.

void average(int *num){

    int sum = 0;

    for (int i = 0; i < arraySize; i++){
        
        sum += num[i];
    }

    float average = (float) sum / arraySize;

    // Print out the maximum, minimum, and average of the numbers in their corresponding functions.
    std::cout<< "The average of the numbers array is: " << average << "\n";

}

void maximum(int *num){

    int max = num[0];

    for (int i = 1 ; i < arraySize; i++){
        if (max < num[i])
        {
            max = num[i];
        }
        
    }

    // Print out the maximum, minimum, and average of the numbers in their corresponding functions.
    std::cout<<"The largest element of the numbers array is: " << max << "\n";

}

void minimum(int *num){

    int min = num[0];

    for (int i = 1 ; i < arraySize; i++){
        if (min > num[i])
        {
            min = num[i];
        }
        
    }
    
    // Print out the maximum, minimum, and average of the numbers in their corresponding functions.
    std::cout<< "The smallest element of the numbers array is: " << min << "\n";

}
