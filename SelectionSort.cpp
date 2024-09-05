#include <vector>
#include <iostream>

class SelectionSort {

    public:
    void sort(std::vector<int>& array) {

        for (int i = 0; i < array.size(); i++) {

            int min_index = i;

            for (int j = i; j < array.size(); j++) {

                if (array[j] < array[min_index]) {

                    min_index = j;
                }
            }

            if (min_index != i) {

            int temp = array[min_index];
            array[min_index] = array[i];
            array[i] = temp;

            }
        }
    }

};

/*
int main() {
    
    std::vector<int> array = {3,2,6,8,1};
    SelectionSort sort;
    sort.sort(array);
    
    for (int i = 0; i < array.size(); i++) {

        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
 
    return 0;
}
*/
