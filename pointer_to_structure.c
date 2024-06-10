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

int main() {
    struct Rectangle r;
    r.length = 100;
    r.breadth = 100;
    r.area = r.length * r.breadth;

    struct Rectangle *p; // Declaration
    p = &r; // Initialization
    printf("sizeof (struct rectangle) = %d\n", sizeof(p));
    printf("length = %0.2lf\n", p->length);
    printf("breadth = %0.2lf\n", p->breadth);
    printf("area = %0.2lf\n", p->area);
    printf("length = %0.2lf\n", (*p).length);
    printf("breadth = %0.2lf\n", (*p).breadth);
    printf("area = %0.2lf\n", (*p).area);

    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); 
    // Before initialization
    printf("length = %0.2lf\n", p->length); // 0.00
    printf("breadth = %0.2lf\n", p->breadth); // 0.00
    printf("area = %0.2lf\n", p->area); // 0.00

    // After initializing with some value
    p->length = 25.25;
    p->breadth = 12.625;
    p->area = p->length * p->breadth;
    printf("length = %0.3lf\n", p->length);
    printf("breadth = %0.3lf\n", p->breadth);
    printf("area = %0.3lf\n", p->area);

    return 0;
}
