#include "Truckloads.h"

int Truckloads::numTruckloads(int numCrates, int loadSize) {

    // base case
    if (numCrates <= loadSize) {
        return 1;
    }

    // logic
    int numTrucks1 = numTruckloads(numCrates/2 + (numCrates % 2), loadSize);
    int numTrucks2 = numTruckloads(numCrates/2, loadSize);
    
    // recursive case
    return numTrucks1 + numTrucks2;
}