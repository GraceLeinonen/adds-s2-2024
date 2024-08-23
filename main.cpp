#include "Finder.h"
#include <iostream>
#include <time.h>

int main() {

    clock_t start, end;

        start = clock();

        Finder finder;
        std::string s1 = "4634554567";
        std::string s2 = "45689";
        std::vector<int> results = finder.findSubstrings(s1,s2);
        end = clock();

        for (int i = 0; i < results.size(); i++) {
            std::cout << results[i] << std::endl;
        }

        double dblTime = (double)((end - start)) / CLOCKS_PER_SEC;
        std::cout << dblTime << std::endl;

    return 0;
}