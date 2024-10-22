#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (high < low) {
        return -1;
    }
    
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, high, target);
    }
}

int main() {
    int arr[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int target = 97;
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;

    int target_idx = binarySearch(arr, low, high, target);

    if (target_idx == -1) {
        printf("Target is missing\n");
    } else {
        printf("Target is at index %d\n", target_idx);
    }

    return 0;
}

/*
    It's not a good idea to use recursion in binary search
    because of time and space complexity.
*/
