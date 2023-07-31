#include <iostream>
#include "calculator.h"

using namespace std;

void swapTwoNumbers(int a, int b) {
    std::cout << "Before " << "A " << a << " B " << b << std::endl;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "After " << "A " << a << " B " << b << std::endl;
}

template <typename T>
void takeInputFromUser(T *a, std::string msg) {
    std::cout << msg << ": ";
    std::cin >> *a ;
    std::cout << std::endl;
}

void calculateBMI(float weight, float height) {
    float bmi = 0;

    bmi = weight / (height * height);

    if (bmi < 18.5) {
        std::cout << "Underweight " << std::endl;
    }
    else if (bmi > 25) {
        std::cout << "Overweight " << std::endl;
    }
    else {
        std::cout << "Normal Weight" << std::endl;
    }

    std::cout << "Your BMI is " << bmi << std::endl;
    
}

void guessNumber() {
    int hostNumber, guessNumber;

    takeInputFromUser<int>(&hostNumber, "Enter Host Number");
    system("cls");
    takeInputFromUser<int>(&guessNumber, "Enter Guess Number");

    (hostNumber == guessNumber) ? cout << "Correct" : cout << "Failed";
}

int main()
{
    std::cout << "Hello World!\n";

    // Swapping of two numbers without using third variable

    int a = 10, b = 20;
    swapTwoNumbers(a, b);

    calculator();

    float weight = 0;
    float height = 0;
    

    takeInputFromUser<float>(&weight, "Enter Weight");
    takeInputFromUser<float>(&height, "Enter height");

    calculateBMI(weight, height);

    guessNumber();

    return 0;
}