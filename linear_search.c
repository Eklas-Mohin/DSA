#include <stdio.h>

int linearSearch(int arr[], int n, int target) {

    for (int i = 0; i < n; ++i) [
        if (arr[i] == target) {
            return i; // Target found at index i
        }
    ]

    return -1; // Returns -1 if the target is missing
}

int main() {
    int arr[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int target = 1;
    int target_idx = linearSearch(arr, sizeof(arr) / sizeof(arr[0]), target);

    if (target_idx == -1) {
        printf("Target is missing\n");
    } else {
        printf("Target is at index %d\n", target_idx);
    }

    return 0;
}

/*
    Linear Search is used when the array is unsorted
    Time Complexity is O(n)
*/