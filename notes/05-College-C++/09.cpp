// find max in an array

#include <iostream>
#include <cstdint>
#include <climits>


int main() {
    int size {};
    int max {INT32_MIN}; // reperesents min 32 bit int
    int min {INT_MIN};

    std::cout << "Enter size: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the elements: ";

    for (int i = 0; i < size; ++i) {

        std::cin >> arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Max: " << max << std::endl;
}
