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
    printf("int <<>> sizeof(ptr) = %d\n", sizeof(p1)); // 8
    printf("char <<>> sizeof(ptr) = %d\n", sizeof(p2)); // 8
    printf("float <<>> sizeof(ptr) = %d\n", sizeof(p3)); // 8
    printf("double <<>> sizeof(ptr) = %d\n", sizeof(p4)); // 8
    printf("struct demo <<>> sizeof(ptr) = %d\n\n", sizeof(p5)); // 8
    // size of a pointer is independent of its data type
}

int main() {
    int a = 10;
    int *p; // declaration
    p = &a; // initialization
    printf("%d\n", a);
    printf("%d\n", *p); // dereferencing
    printf("%p\n", p); // memory address
    printf("%p\n", &a); // memory address
    int *heap, len = 5;
    heap = (int *)malloc(len * sizeof(int)); // created in heap memory
    for (int i = 0; i < len; ++i) {
        heap[i] = i * 2 + 1;
    }
    for (int i = 0; i < len; ++i) {
        printf("%d ", *(heap + i));
    }
    printf("\n");
    free(heap); // deallocation
    int arr[] = {2, 4, 6, 8, 10};
    int *ptr = arr; // arr = &arr[0]
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    pointer_size();
    return 0;
}
