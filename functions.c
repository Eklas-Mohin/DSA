/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int add(int a, int b) { // formal parameters
    int c = a + b;
    return c;
}

int main() {
    int num1 = 10, num2 = 101;
    int sum = add(num1, num2); // actual parameters
    printf("sum = %d\n", sum);
    return 0;
}

/*
    all the codes are written inside the 
    main function --> monolithic programming
    breaking a program into smaller functions
    then integrating those functions inside
    the main function --> modular programming or
    procedural programming
*/
 