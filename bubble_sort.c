#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swaps = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swaps += 1;
            }
        }
        if (!swaps) break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {17, 23, 7, 59, 73, 13, 37, 53, 47};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array:\n");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("\nSorted Array:\n");
    printArray(arr, size);

    return 0;
}
