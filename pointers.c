/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct demo {
    int p1;
    char p2;
    float p3;
    double p4;
};

void pointer_size() {
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct demo *p5;

    // Size of a pointer is independent of its data type
    printf("int <> sizeof(ptr) = %d\n", sizeof(p1)); // 8
    printf("char <> sizeof(ptr) = %d\n", sizeof(p2)); // 8
    printf("float <> sizeof(ptr) = %d\n", sizeof(p3)); // 8
    printf("double <> sizeof(ptr) = %d\n", sizeof(p4)); // 8
    printf("struct demo <> sizeof(ptr) = %d\n\n", sizeof(p5)); // 8
}

int main() {
    int a = 10;
    int *p; // Declaration of a pointer of type integer
    p = &a; // Initialization

    printf("%d\n", a);
    printf("%d\n", *p); // Dereferencing
    printf("%p\n", p); // Memory address
    printf("%p\n", &a); // Memory address

    int *heap, len = 5;
    heap = (int *)malloc(len * sizeof(int)); // Created in heap memory
    for (int i = 0; i < len; ++i) {
        heap[i] = i * 2 + 1;
    }
    for (int i = 0; i < len; ++i) {
        printf("%d ", *(heap + i));
    }
    printf("\n");
    free(heap); // Free the allocated memory

    int arr[] = {2, 4, 6, 8, 10};
    int *ptr = arr; // arr = &arr[0]
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    pointer_size();

    return 0;
}