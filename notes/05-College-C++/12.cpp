// rotation of an array

#include <iostream>

void rotateArray(int arr[], unsigned int len, int rotation) {
    std::cout << "Rotating by " << rotation << std::endl;
    int arr1[len];
    for (unsigned int i = 0; i < len; ++i) {
        int newInd = (i + rotation) % len;
        arr1[newInd] = arr[i];
    }

    for (unsigned int i = 0; i < len; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int arr[], int ind1, int ind2) {
    int tmp = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = tmp; 
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5};
    unsigned int arrlen = 6;
    int rotation = 1;

    for (unsigned int i = 0; i < arrlen; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    rotateArray(arr, arrlen, rotation);

    std::cout << '\n';
    return 0;
}
