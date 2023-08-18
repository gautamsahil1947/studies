// insertion sort
#include <iostream>

void swap(int arr[], int ind1, int ind2) {
    int tmp = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = tmp;
}

void insertionSort(int arr[], int len) {
    // insertion sort
    for (int i = 0; i < len; ++i) {

    }
}


void printArr(int arr[], int len) {
    std::cout << "[";
    for (int i = 0; i < len; ++i) {
        std::cout << arr[i]; 
        if (i != len - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    
}

int main() {
    int arr[] = {5, 4, 3, 2, 1, 0};
    int len = 6;
    printArr(arr, len);
    insertionSort(arr, len);
    printArr(arr, len);

    return 0;
}
