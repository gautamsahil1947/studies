#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int* searchRange(int* nums, int numsSize, int target, int* returnSize);
int binarySearch(int arr[], int length, int target, int lowerLimit);

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int length = 6;
    int returnSize = 2;
    printf("[%i, %i]\n", searchRange(arr, 6, target, &returnSize)[0], searchRange(arr, length, target, &returnSize)[1]);
}



/**
 * https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* arr = (int* ) (malloc(sizeof(int) * 2));
    arr[0] = binarySearch(nums, numsSize, target, 1);
    arr[1] = binarySearch(nums, numsSize, target, 0);
    return arr;
}


int binarySearch(int arr[], int length, int target, int lowerLimit) {
    int start = 0;
    int end = length - 1;
    int mid = INT_MIN;
    int ind = -1;

    while (start <= end) {

        mid = start + (end - start) / 2;

        if (arr[mid] > target) {
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            ind = mid;
            if (lowerLimit) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

    }
    return ind;
}
