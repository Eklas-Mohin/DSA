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
    printf("length of the array = %d\n", length);
    arr[0] = 2;
    printf("arr[0] = %d\n", arr[0]);
    printf("*(arr + 0) = %d\n", *(arr + 0)); // *(arr + 0) == arr[0]
    printf("*arr = %d\n", *arr); // *arr == *(arr + 0) == arr[0]
    printf("*(arr + 1) = %d\n", *(arr + 1)); // *(arr + 1) == arr[1]
    *arr = 3;
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
    int gr[length]; // variable length array has garbage values
    for (int i = 0; i < length; ++i) {
        printf("%d ", gr[i]); // garbage
    }
    printf("\n");
    int x[10] = {1, 2, 3, 5}; // constant value as length
    for (int i = 0; i < 10; ++i) {
        printf("%d ", x[i]); // 0 --> which are not initialized
    }
    printf("\n");
    printf("length of the array : ");
    scanf("%d", &length);
    int my_arr[length]; 
    /*
    variable length arrays cannot be initialized during declaration
    */
    for (int i = 0; i < length; ++i) {
        scanf("%d", &my_arr[i]); // taking input from user
    }
    for (int i = 0; i < length; ++i) {
        printf("arr[%d]: %d\n", i, my_arr[i]);
    }
    int zero[5] = {}; // all the elements are zero
    for (int i = 0; i < 5; ++i) {
        printf("%d ", zero[i]);
    }
    printf("\n");
    int a[5]; // uninitialized array has garbage values
    for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]); // garbage
    }
    printf("\n");
    return 0;
}
