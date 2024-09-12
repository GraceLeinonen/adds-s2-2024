#include <vector>
#include <iostream>

class InsertionSort {

    public:
    void sort(std::vector<int>& array) {

        /*
        for (int i = 1; i < array.size(); i++) {

            for (int j = i; j >= 0; j--) {

                if (array.at(j) < array.at(j-1)) {

                    int temp = array[j];
                    array[j] = array[j-1];
                    array[j-1] = temp;

                }

                else break; //! WHAT IF YOU DON'T HAVE THE ELSE
            }
        }
    }
    */

    for (int i = 1; i < array.size(); i++) {

        for (int j = i; j >= 0; j--) {

            if (array.at(j) < array.at(j-1)) {
                
               int temp = array[j];
               array[j] = array[j-1];
               array[j-1] = temp;

            }

            else break;
        }

    }
    }
};

int main() {

    InsertionSort sort;
    std::vector<int> array = {5,3,7,10,3,5};
    sort.sort(array);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array.at(i) << " ";
    }

    std::cout << std::endl;
    return 0;
}
