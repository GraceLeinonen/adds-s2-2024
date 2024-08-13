#include "NumInString.h"

int NumInString::firstNumber(std::string str) {

    // base case
    if (str.length() == 0) {
        return -1;
    }

    if (str.at(0) >= 48 && str.at(0) <= 57) {
        return str.at(0) - 48;
    }

    // logic
    std::string subString = str.substr(1, str.length()-1);

    // recursive
    return firstNumber(subString);

}
