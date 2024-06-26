/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9};

    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("sizeof(int) = %d\n", sizeof(int));
    int length = sizeof(arr) / sizeof(int);
    
    arr[0] = 2;
    printf("arr[0] = %d\n", arr[0]);
    printf("*(arr + 0) = %d\n", *(arr + 0)); // *(arr + 0) == arr[0]
    printf("*arr = %d\n", *arr); // *arr == *(arr + 0) == arr[0]
    printf("*(arr + 1) = %d\n", *(arr + 1)); // *(arr + 1) == arr[1]
    printf("*arr = %d\n", arr[0]);

    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
        *(arr + i) = arr[i] * 2;
    }
    printf("\n");

    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < length; ++i) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    printf("Length of the array = %d\n", length);
    int grb[length]; // Uninitialized Variable length array has garbage values
    for (int i = 0; i < length; ++i) {
        printf("%d ", grb[i]); // Garbage
    }
    printf("\n");

    int x[10] = {1, 2, 3, 5}; // Constant value as length
    for (int i = 0; i < 10; ++i) {
        printf("%d ", x[i]); // 0 --> Which are not initialized
    }
    printf("\n");

    printf("Enter length of the array : ");
    scanf("%d", &length);
    int my_arr[length]; 
    // Variable length arrays cannot be initialized during declaration
    for (int i = 0; i < length; ++i) {
        scanf("%d", &my_arr[i]); // Taking input from user
    }
    for (int i = 0; i < length; ++i) {
        printf("arr[%d]: %d\n", i, my_arr[i]);
    }

    int zero[5] = {}; // All the elements are initialized with zero
    for (int i = 0; i < 5; ++i) {
        printf("%d ", zero[i]);
    }
    printf("\n");

    int a[5]; // Uninitialized array has garbage values
    for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]); // Garbage
    }
    printf("\n");

    return 0;
}
