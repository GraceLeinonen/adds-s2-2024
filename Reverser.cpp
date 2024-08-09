#include "Reverser.h"
#include <string>
#include <iostream>
#include <math.h>

int Reverser::reverseDigit(int value) {

    //*1 base case
    if (value <= 0) {
        return 0;
    }

    //*2 maths
    // find total digits in value
    int numDigits = (int)log10(value);

    // get the right-most digit
    int digit = value % 10;

    // shift it to desired base
    int newDigit = digit * pow(10, numDigits);

    //*3 recursive case
    return (newDigit + reverseDigit(value/10));
}

std::string Reverser::reverseString(std::string characters) {

    // base case
    if (characters.size() <= 1) {
        return characters;
    }

    // maths
    std::string newString = characters.substr(characters.size()-1);
    std::string leftoverString = characters.substr(0, characters.size()-1);

    
    // recursive case
    newString.append(reverseString(leftoverString));
    return newString;

}