#include <stdio.h>

int linearSearch(int arr[], int length, int target);

int main() {
    // linear search
    int arr[] = {3, 7, 0, -1, 5, 9};
    int target = 2;

    printf("Target Index Is: %i\n", linearSearch(arr, 6, target));
}

// worst case --> n comparisons.
// applicable on non sorted arrays.
int linearSearch(int arr[], int length, int target) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
