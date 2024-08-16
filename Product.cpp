#include "Product.h"

int Product::findProduct(int a, int b) {
    
    // base case
    if (b == 0) {
        return 0;
    }

    // recursive case
    return a + findProduct(a, b - 1);
}

int Product::findProductTail(int a, int b, int acc) {
    
    // base case
    if (b == 0) {
        return acc;
    }

    // recursive case
    return findProductTail(a, b - 1, acc + a);
}