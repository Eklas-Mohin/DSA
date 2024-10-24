#include <stdio.h>

void counting_sort(int arr[], int n) {
    int largest = arr[0], smallest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }

    int range = largest - smallest + 1;
    int count[range];

    for (int i = 0; i < range; ++i) {
        count[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        count[arr[i] - smallest]++;
    }

    int curr = 0;
    for (int i = 0; i < range; ++i) {
        while (count[i]-- > 0) {
            arr[curr++] = i + smallest;
        }
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {17, 23, 7, -59, 73, 13, -37, 53, 47};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array:\n");
    print_array(arr, n);

    counting_sort(arr, n);

    printf("\nSorted Array:\n");
    print_array(arr, n);

    return 0;
}
