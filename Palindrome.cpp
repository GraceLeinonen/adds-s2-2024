#include <string>
#include "Palindrome.h"

bool Palindrome::isPalindrome(std::string str, int low, int high) {

    // base case - i.e. we get to halfway and no mismatch occurs
    if (low >= high) {
        return true;
    }

    // logic - mismatch occurs
    if (str[low] != str[high]) {
        return false;
    }

    // recursive case - move to next pair
    return isPalindrome(str, low + 1, high - 1);

}