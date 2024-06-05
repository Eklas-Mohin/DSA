#include <stdio.h>

struct rectangle {
    double length;
    double breadth;
};

int main() {
    struct rectangle r;
    printf("Enter length of the rectangle : ");
    scanf("%lf", &r.length);
    printf("Enter breadth of the rectangle : ");
    scanf("%lf", &r.breadth);
    printf("Length = %0.2lf Breadth = %0.2lf\n", r.length, r.breadth);
    printf("Area = %0.2lf\n", r.length * r.breadth);
    return 0;
}
