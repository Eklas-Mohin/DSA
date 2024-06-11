/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Rectangle {
    double length;
    double breadth;
    double area;
};

void initializeRectangle(struct Rectangle *r, double l, double b) {
    r->length = l;
    r->breadth = b;
}

void areaOfTheRectangle(struct Rectangle r) {
    r.area = r.length * r.breadth;
    printf("Area = %0.3lf\n", r.area);
}

void changeLength(struct Rectangle *r, double l) {
    r->length = l;
}

int main() {
    struct Rectangle r;

    initializeRectangle(&r, 16, 15);
    areaOfTheRectangle(r); // Area = 240.00
    changeLength(&r, 20);
    areaOfTheRectangle(r); // Area = 300.00

    return 0;
}


