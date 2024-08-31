#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <sstream>

int main() {

    // read in integers and put into vector
    std::string input;
    std::cout << "Enter integers separated by space: ";
    std::getline(std::cin, input);

    std::stringstream ss(input); 
    std::vector<int> array;
    int number;

    while (ss >> number) {
        array.push_back(number);
    }

    // quick sort
    QuickSort quick;
    array = quick.sort(array);

    // binary search
    RecursiveBinarySearch binary;
    bool found = binary.search(array, 1);

    // read out results
    if (found = 1) {

        std::cout << "true ";
    }

    else {

        std::cout << "false ";
    }

    for (int number : array) {
        std::cout << number << " ";
    }

    std::cout << std::endl;

} 
