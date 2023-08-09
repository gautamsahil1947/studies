// take an array input and find the sum.

#include <iostream>


int main() {
    int sum {};
    int size {};

    // taking size input
    std::cout << "Enter the size: ";
    std::cin >> size;

    // creating array
    std::cout << "Enter the elements: ";
    int arr[size];

    // taking input
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << "Sum is : " << sum << std::endl;

}
