#include <vector>
#include <iostream>

class InsertionSort {

    public:
    void sort(std::vector<int>& array) {

        for (int i = 1; i < array.size(); i++) {

            for (int j = i; j >= 0; j--) {

                if (array.at(j) < array.at(j-1)) {

                    int temp = array[j];
                    array[j] = array[j-1];
                    array[j-1] = array[j];
                }

                else break;
            }
        }
    }
};

int main() {
    
    std::vector<int> array = {3,2,6,8,1};
    InsertionSort sort;
    sort.sort(array);
    
    for (int i = 0; i < array.size(); i++) {

        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
 
    return 0;
}