#include <stdio.h>
#include <limits.h>


int binarySearch(int arr[], int length, int target);

int main() {
    int arr[] = {3, 7, 11, 13, 19, 27};
    int target = 2;
    printf("Index is %i\n", binarySearch(arr, 6, target));
    return 0;
}

// for n things --> max comparisions O(log n)
int binarySearch(int arr[], int length, int target) {
    int start = 0;
    int end = length - 1;
    int mid = INT_MIN;

    while (start <= end) {

        // int + int ==> ( > int)
        mid = (start + end) / 2;
        // mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;

}
