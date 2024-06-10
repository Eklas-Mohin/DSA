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

    printf("Enter length of the rectangle : ");
    scanf("%lf", &r.length);
    printf("Enter breadth of the rectangle : ");
    scanf("%lf", &r.breadth);

    r.area = r.length * r.breadth;
    printf("Length = %0.2lf\nBreadth = %0.2lf\n", r.length, r.breadth);
    printf("Area = %0.2lf unit\n", r.area);
    
    return 0;
}
