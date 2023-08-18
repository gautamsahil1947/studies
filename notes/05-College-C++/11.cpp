// linear search
#include <iostream>

int linearSearch(int arr[], int size, int target) {
    int index {-1};
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            // return i;
            index = i;
        }
    }
    return index;
    // return -1;
}


int main() {
    int size {};
    std::cout << "Enter the size of array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int target {};
    std::cout << "Enter target: ";
    std::cin >> target;
    std::cout << "Index is: " << linearSearch(arr, size, target) << std::endl;
    return 0;
}

/*
 * What is the index
 * Are there any repetitions
 * What if the size is negative
 */
