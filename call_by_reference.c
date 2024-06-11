/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(int *a, int *b) { // Call by reference
    int temp = *a;
    *a = *b;
    *b = temp; // Formal parameters are modified
    printf("Swap function <> a = %d   b = %d \n", *a, *b);
}

int main() {
    int a = 15, b = 51;
    printf("Before calling swap function <> a = %d   b = %d \n", a, b);
    swap(&a, &b); // Actual parameters are modified
    printf("After calling swap function <> a = %d   b = %d \n", a, b);
    return 0;
}

/*
    Call by reference == Pass by reference
*/
