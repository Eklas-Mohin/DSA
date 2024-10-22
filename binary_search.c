#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low, mid, high;
    low = 0, high = n - 1; // Array has 0 based indexing
    
    while(high >= low) { // If low > high the target is missing
        mid = low + (high - low) / 2; // This works just fine
        mid = low + (high - low) / 2; // Avoids integer overflow
        if (arr[mid] == target) {
            return mid; // Target found, returns the index = mid
        } else if (arr[mid] > target) {
            high = mid - 1; // Target is in the left side 
        } else {
            low = mid + 1; // Target is in the right side 
        }
    }

    return -1; // Returns -1 if the target is missing
}

int main() {
    int arr[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int target = 1;
    int target_idx = binarySearch(arr, sizeof(arr) / sizeof(arr[0]), target);

    if (target_idx == -1) {
        printf("Target is missing\n");
    } else {
        printf("Target is at index %d\n", target_idx);
    }

    return 0;
}

/*
    Binary Search is only applicable when the array is sorted
    Time Complexity is O(log2(n))
*/