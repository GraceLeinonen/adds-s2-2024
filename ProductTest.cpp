#include "Product.h"
#include <iostream>

int main() {

    Product product;
    int a = 2;
    int b = 5;
    std::cout << product.findProduct(a,b) << std::endl;
    std::cout << product.findProductTail(a,b,0) << std::endl;
    
    return 0;
}