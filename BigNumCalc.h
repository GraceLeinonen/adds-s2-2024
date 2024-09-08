#include <list>
#include <string>

class BigNumCalc {

    public:

    // constructor
    BigNumCalc();

    // destructor
    ~BigNumCalc();

    // a method that creates a list representing the provided string
    std::list<int> buildBigNum(std::string numString);

    // method to add num1 and num2 and return the sum
    std::list<int> add(std::list<int> num1, std::list<int> num2);

    // method to substract num2 from num1 and return the difference
    std::list<int> sub(std::list<int> num1, std::list<int> num2);

    // method to multiply num1 by num2 and return the product (assume num2 will be 1 digit long)
    std::list<int> mul(std::list<int> num1, std::list<int> num2);
    
};