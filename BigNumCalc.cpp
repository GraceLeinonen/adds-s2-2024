#include "BigNumCalc.h"
#include <string>
#include <cmath>
#include <iostream>

BigNumCalc::BigNumCalc() {}

BigNumCalc::~BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {

    // initialise list
    std::list<int> list;

    // convert string to integer
    long number = std::stol(numString);

    // extract digits from number and put into list
    while (number > 0) {

        int digit = number % 10;
        list.push_front(digit);
        number = (number - digit) / 10;
    }

    return list;
       
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {

    // add leading zeroes if necessary
    int num_difference = abs(num2.size() - num1.size());
    for (int i = 0; i < num_difference; i++) {

        if (num1.size() < num2.size()) {
            num1.push_front(0);
        }

        else if (num2.size() < num1.size()) {
            num2.push_front(0);
        }

        else break;
    }

    // initialise list for sum
    std::list<int> sum;

    // initialise reverse iterators so we can start at end of lists
    std::list<int>::reverse_iterator it1 = num1.rbegin();
    std::list<int>::reverse_iterator it2 = num2.rbegin();

    // initialise sum_digit and remainder
    int sum_digit;
    int remainder = 0;

    // loop
    while (it1 != num1.rend()) {

        // add two digits
        sum_digit = *it1 + *it2;

        // check for previous remainder
        if (remainder == 1) {
            sum_digit++;
        }

        // check for new remainder
        if (sum_digit > 9) {
            sum_digit = sum_digit % 10;
            remainder = 1;
        }
        
        else {
            remainder = 0;
        }
        
        // add sum_digit to sum list and increment iterators
        sum.push_front(sum_digit);
        it1++;
        it2++;
    }

    // check for final remainder
    if (remainder == 1) {
        sum.push_front(1);
    }

    return sum;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {

    // add leading zeroes if necessary
    //! NOTE: we're assuming num1 > num2
    int num_difference = abs(num2.size() - num1.size());
    for (int i = 0; i < num_difference; i++) {

        if (num1.size() < num2.size()) {
            num1.push_front(0);
        }

        else if (num2.size() < num1.size()) {
            num2.push_front(0);
        }

        else break;
    }

    // initialise list for difference
    std::list<int> difference;

    // initialise reverse iterators so we can start at end of lists
    std::list<int>::reverse_iterator it1 = num1.rbegin();
    std::list<int>::reverse_iterator it2 = num2.rbegin();

    // initialise sum_digit and remainder
    int difference_digit;

    // loop
    while (it1 != num1.rend()) {

        // check condition
        if (*it1 < *it2) {

            // subtract two digits with a carry
            difference_digit = (*it1 + 10) - *it2;

            //! should be a better way of doing this
            it1++;
            (*it1)--;
            it1--;
        }

        else {
            
            // subtract two digits normally
            difference_digit = *it1 - *it2;
        }
        
        // add difference_digit to difference list and increment iterators
        difference.push_front(difference_digit);
        it1++;
        it2++;
    }

    // remove all leading zeroes
    std::list<int>::iterator it_diff = difference.begin();

    while (*it_diff == 0 && it_diff != difference.end()) {

        difference.erase(it_diff);
        it_diff = difference.begin();
    }

    if (difference.empty()) {
        difference.push_back(0);
    }

    return difference;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {

    // initialise list for product
    std::list<int> product;

    // initialise reverse iterators so we can start at end of lists
    std::list<int>::reverse_iterator it1 = num1.rbegin();
    std::list<int>::reverse_iterator it2 = num2.rbegin();



    // initialise sum_digit and remainder
    int product_digit;
    int remainder = 0;

    // loop
    while (it1 != num1.rend()) {

        product_digit = *it1 * *it2;

        // check for previous remainder
        if (remainder != 0) {
            product_digit = product_digit + remainder;
        }

        // check for new remainder
        if (product_digit > 9) {
            remainder = floor(product_digit / 10);
            product_digit = product_digit % 10;
        }

        else {
            remainder = 0;
        }

        // add sum_digit to sum list and increment num1 iterator
        product.push_front(product_digit);
        it1++;
    }

    // check for final remainder
    if (remainder != 0) {
        product.push_front(remainder);
    }

    return product;
}