/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* heapArray(int len) {
    int *p;

    p = (int *)malloc(len * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < len; ++i)  p[i] = i * 5;

    return p;
}

int main() {
    int len;

    printf("Enter length of the array : ");
    scanf("%d", &len);
    int *heap_arr = heapArray(len);
    for (int i = 0; i < len; ++i) {
        printf("%d ", heap_arr[i]);
    }
    printf("\n");

    return 0;
}
