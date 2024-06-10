/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(int *a, int *b) { // call by reference
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap function <> a = %d   b = %d \n", *a, *b);
    // formal parameters are modified
}

int main() {
    int a = 15, b = 51;
    printf("before calling swap function <> a = %d   b = %d \n", a, b);
    swap(&a, &b);
    printf("after calling swap function <> a = %d   b = %d \n", a, b);
    // actual parameters are also modified
    return 0;
}

/*
 call by reference == pass by reference
*/
