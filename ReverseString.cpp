#include "ReverseString.h"

std::string ReverseString::reverseString(std::string str) {
    
    // base case
    if (str.length() == 1) {
        return str;
    }

    // get the last character of string
    std::string character = str.substr(str.length() - 1, 1);
    std::string new_string = character.append()
    
    return reverseString(character.append(str.substr(0, str.length() - 1)));

    // recursive case

}