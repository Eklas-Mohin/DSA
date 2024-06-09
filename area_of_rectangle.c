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
    printf("length of the rectangle : ");
    scanf("%lf", &r.length);
    printf("breadth of the rectangle : ");
    scanf("%lf", &r.breadth);
    r.area = r.length * r.breadth;
    printf("length = %0.2lf\nbreadth = %0.2lf\n", r.length, r.breadth);
    printf("area = %0.2lf unit\n", r.area);
    return 0;
}
