#include <iostream>
#include "declarations.hxx"


int main() {
    int arr[] = {1, 3, 2, 5, 3, 0};
    int length {6};
    sahil::printArray(arr, length);
    sahil::bubbleSort(arr, length);
    sahil::printArray(arr, length);
}
