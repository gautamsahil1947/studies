#include <iostream>
#include <climits>
// important algorithms


namespace sahil {

// important algorithms
void swap(int array[], int index1, int index2) {
    int tmp = array[index1];
    array[index1] = array[index2];
    array[index2] = tmp;
}

void printArray(int array[], int length) {
    std::cout << "[";
    for (int i = 0; i < length - 1/* i < length */; ++i) {
        std::cout << array[i] << ", ";
        // if (i != length - 1) {
        //     std::cout << ", ";
        // } else {
        //     std::cout << ']' << std::endl;
        // }
        
    }
    if (length - 1 >= 0) {
        std::cout << array[length - 1] << ']' << std::endl;
    }
    else {
        std::cout << ']' << std::endl;
    }
}

// sorting algorithms
void selectionSort(int array[], int length) {
    if (length <= 0) {
        std::cout << "Only positive length allowed\n";
        return;
    }

    for (int i = 0; i < length - 1; ++i) {

        int minVal {INT_MAX};
        int minInd {-1};

        for (int j = i; j < length; ++j) {
            if (array[j] < minVal) {
                minVal = array[j];
                minInd = j;
            }
        }
        sahil::swap(array, i, minInd);

    }
}


void bubbleSort(int array[], int length) {

    if (length <= 0) {
        std::cerr << "Positive length required\n";
        return;
    }

    for (int i = 0; i < length - 1; ++i) {
        bool didAswap {false};
        for (int j = 1; j < length - i; ++j) {
            if (array[j - 1] > array[j]) {
                didAswap = true;
                sahil::swap(array, j - 1, j);
            }
        }

        if (!didAswap) {
            // if no swap => sorted
            return;
        }
    }
}

void insertionSort(int array[], int length) {

}

// searching algorithms
int linearSearch(int array[], int length, int target) {
    // assuming only single occurence of target
    if (length <= 0) {
        std::cerr << "Error: Only non zero length allowed\n";
        return -1;
    }

    for (int i = 0; i < length; ++i) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int array[], int length, int target);
int mergeSort(int array[], int length, int target);
int cyclicSort(int array[], int length, int target);

}

