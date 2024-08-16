#include "Truckloads.h"
#include <iostream>

int main() {

    Truckloads truckloads;
    int numCrates = 14;
    int loadSize = 3;
    std::cout << truckloads.numTruckloads(numCrates, loadSize) << std::endl;
    
    return 0;
}