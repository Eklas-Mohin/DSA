/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void mod_array(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        arr[i] = arr[i] * 5;
    }
}

int main() {
    int arr[] = {1, 5, 25, 125, 625, 3125};
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    mod_array(arr, len);
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/*
    Arrays are only passed by reference
*/
