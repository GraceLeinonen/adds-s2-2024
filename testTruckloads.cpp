#include "iostream"
#include "Truckloads.h"

int main() {

    Truckloads truck;
    int numCrates = 6;
    int loadSize = 3;
    
    std::cout << truck.numTrucks(numCrates, loadSize) << std::endl;

    return 0;
}