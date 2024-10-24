#include <stdio.h>

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int temp = arr[i];
        int idx = i - 1;

        while (idx >= 0 && arr[idx] > temp) {
            arr[idx + 1] = arr[idx];
            idx--;
        }
        arr[idx + 1] = temp;
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {17, 23, 7, 59, 73, 13, 37, 53, 47};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array:\n");
    print_array(arr, n);

    insertion_sort(arr, n);

    printf("\nSorted Array:\n");
    print_array(arr, n);

    return 0;
}
