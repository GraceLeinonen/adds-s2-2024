#include "ReverseString.h"

std::string ReverseString::reverseString(std::string str) {
    
    // base case
    if (str.length() == 1) {
        return str;
    }
    
    // get the last character of string
    std::string character = str.substr(str.length() - 1, 1);

    // get leftover string
    std::string old_string = str.substr(0, str.length() - 1);

    // create new string 
    std::string new_string = character.append(reverseString(old_string));
    return new_string;
}