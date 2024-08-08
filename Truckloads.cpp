#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    
    // base case
    if (numCrates <= loadSize) {
        return 1;
    }

    // maths
    int trucks;
    int numHalfCrates = numCrates / 2;

    // recursive case
    trucks = numTrucks(numHalfCrates + (numCrates % 2), loadSize);
    trucks += numTrucks(numHalfCrates, loadSize); // trucks + numTrucks()

    return trucks;
}