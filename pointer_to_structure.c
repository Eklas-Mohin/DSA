/**
 *    author: mohin    
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct rectangle {
    double length;
    double breadth;
    double area;
};

int main() {
    struct rectangle r;
    r.length = 100;
    r.breadth = 100;
    r.area = r.length * r.breadth;
    struct rectangle *p; // declaration
    p = &r; // initialization
    printf("sizeof (struct rectangle) = %d\n", sizeof(p));
    printf("length = %0.2lf\n", p->length);
    printf("breadth = %0.2lf\n", p->breadth);
    printf("area = %0.2lf\n", p->area);
    printf("length = %0.2lf\n", (*p).length);
    printf("breadth = %0.2lf\n", (*p).breadth);
    printf("area = %0.2lf\n", (*p).area);
    p = (struct rectangle *)malloc(sizeof(struct rectangle)); 
    // before initialization
    printf("length = %0.2lf\n", p->length); // 0.00
    printf("breadth = %0.2lf\n", p->breadth); // 0.00
    printf("area = %0.2lf\n", p->area); // 0.00
    // after initializing with some value
    p->length = 25.25;
    p->breadth = 12.625;
    p->area = p->length * p->breadth;
    printf("length = %0.3lf\n", p->length);
    printf("breadth = %0.3lf\n", p->breadth);
    printf("area = %0.3lf\n", p->area);
    return 0;
}
