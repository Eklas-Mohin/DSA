/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(int a, int b) { // Call by value
    int temp = a;
    a = b;
    b = temp; // Formal parameters are modified
    printf("swap function <> a = %d   b = %d \n", a, b);
    
}

int main() {
    int a = 15, b = 51;
    printf("before calling swap function <> a = %d   b = %d \n", a, b);
    swap(a, b); // Actual parameters remain same
    printf("after calling swap function <> a = %d   b = %d \n", a, b);
    return 0;
}

/*
    Call by value == Pass by value
*/
