#include <vector>
#include <iostream>

class SelectionSort {

    public:
    void sort(std::vector<int>& array) {

        for (int i = 0; i < array.size(); i++) {

            int min_index = i;

            for (int j = i; j < array.size(); j++) {

                if (array.at(j) < array.at(min_index)) {
                    min_index = j;
                }
            }

            if (i != min_index) {
                int temp = array.at(min_index);
                array.at(min_index) = array.at(i);
                array.at(i) = temp;
            }
        }
    }
};

/*
int main() {

    SelectionSort sort;
    std::vector<int> array = {5,3,7,10,3,5};
    sort.sort(array);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array.at(i) << " ";
    }

    std::cout << std::endl;
    return 0;
}
*/

//! WHY CAN'T I HAVE MULTIPLE MAINS 