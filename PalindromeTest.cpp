#include <string>
#include "Palindrome.h"
#include <iostream>

int main() {
    Palindrome palindrome;
    std::string str = "ABCBA";

    if (palindrome.isPalindrome(str, 0, str.length() - 1)) {
        std::cout << "Palindrome" << std::endl;
    }

    else {
        std::cout << "Not Palindrome" << std::endl;
    }

    return 0;
}