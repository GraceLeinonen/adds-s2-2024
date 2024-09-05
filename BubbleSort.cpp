#include <vector>
#include <iostream>

class BubbleSort {

    public:
    void sort(std::vector<int>& array) {

        for (int i = array.size() - 1; i >= 0; i--) {

            for (int j = 0; j < i; j++) {

                if (array[j] > array[j+1]) {

                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
    }
};

int main() {
    
    std::vector<int> array = {3,2,6,8,1};
    BubbleSort sort;
    sort.sort(array);
    
    for (int i = 0; i < array.size(); i++) {

        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
 
    return 0;
}