#include "Power.h"
#include <iostream>

int main() {

    Power power;
    int a = 2;
    int b = 3;
    std::cout << power.Pow(a,b) << std::endl;
    std::cout << power.PowTail(a,b,1) << std::endl;
    
    return 0;
}