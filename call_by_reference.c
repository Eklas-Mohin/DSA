/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swapFunction(int *a, int *b) { 
    int temp = *a;
    *a = *b;
    *b = temp;  // Actual parameters are modified
    printf("Swap function <> a = %d   b = %d \n", *a, *b);
}

int main() {
    int a = 15, b = 51;

    printf("Before calling swap function <> a = %d   b = %d \n", a, b);
    swapFunction(&a, &b); // Call by reference
    printf("After calling swap function <> a = %d   b = %d \n", a, b);

    return 0;
}

// Call by reference == Pass by reference
