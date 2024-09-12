#include <vector>
#include <iostream>

class BubbleSort {

    public:
    void sort(std::vector<int> array) {

        for (int i = array.size(); i >= 0; i--) {

            for (int j = 0; j < i; j++) {

                if (array.at(j) > array.at(j+1)) {

                    int temp = array.at(j);
                    array.at(j) = array.at(j+1);
                    array.at(j+1) = temp;
                }
            }
        }
    }
};

int main() {

    BubbleSort sort;
    std::vector<int> array = {5,3,7,10,3,5};
    sort.sort(array);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array.at(i) << " ";
    }

    std::cout << std::endl;
    return 0;
}
