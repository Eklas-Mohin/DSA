#include <stdio.h>

int binary_search(int arr[], int n, int target) {
    int low, mid, high;
    low = 0, high = n - 1; // Array has 0 based indexing
    
    while (high >= low) {
        mid = low + (high - low) / 2; // Avoids overflow
        if (arr[mid] == target) {
            return mid; // Target found, returns the index
        } else if (arr[mid] > target) {
            high = mid - 1; // Target is on the left side 
        } else {
            low = mid + 1; // Target is on the right side 
        }
    }

    return -1; // Returns -1 if the target is not found
}

int main() {
    int arr[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int target = 9;
    int targets_index = binary_search(arr, sizeof(arr) / sizeof(arr[0]), target);

    if (targets_index == -1) {
        printf("Target not found\n");
    } else {
        printf("Target is at index %d\n", targets_index);
    }

    return 0;
}

/*
    Binary Search is only applicable when the array is sorted
    Time Complexity is O(log2(n))
*/
