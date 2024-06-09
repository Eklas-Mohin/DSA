/**
 *    author: mohin
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LIMIT 30

// user defined data type
struct rectangle {
    double length;
    double breadth;
    double area;
};

struct complex {
    int real;
    char sign; // allocate 4 bytes but uses only 1 (concept --> padding)
    int imaginary;
};

struct candidate {
    int rank;
    char name[MAX_LIMIT];
    char dept[MAX_LIMIT];
    char institute[MAX_LIMIT];
    char address[MAX_LIMIT];
};

void calculate(struct rectangle r) {
    r.area = r.length * r.breadth;
    printf("Length = %0.2lf\nBreadth = %0.2lf\n", r.length, r.breadth);
    printf("Area = %0.2lf unit\n", r.area);
}

void complex_number(struct complex c ) {
    printf("x = %d %c i%d \n", c.real, c.sign, c.imaginary);
}

void print_list(struct candidate c) {
    int x = 0;
    printf("      Rank: %03d", c.rank);
    printf("      Name: ");
    for (int i = 0; i < strlen(c.name) - 1; ++i) {
        printf("%c", c.name[i]);
    }
    x = 25 - strlen(c.name);
    for (int i = 0; i < x; ++i) {
        printf(" ");
    }
    printf("      Department: ");
    for (int i = 0; i < strlen(c.dept) - 1; ++i) {
        printf("%c", c.dept[i]);
    }
    x = 5 - strlen(c.dept);
    for (int i = 0; i < x; ++i) {
        printf(" ");
    }
    printf("      Institute: ");
    for (int i = 0; i < strlen(c.institute) - 1; ++i) {
        printf("%c", c.institute[i]);
    }
    x = 5 - strlen(c.institute);
    for (int i = 0; i < x; ++i) {
        printf(" ");
    }
    printf("      Address: ");
    for (int i = 0; i < strlen(c.address) - 1; ++i) {
        printf("%c", c.address[i]);
    }
    x = 30 - strlen(c.address);
    for (int i = 0; i < x; ++i) {
        printf(" ");
    }
    printf("\n");
}

void candidate_list() {
    int n; char temp;
    printf("Number of candidates : ");
    scanf("%d", &n); scanf("%c", &temp);
    struct candidate list[n]; // array of structure candidate
    for (int i = 0; i < n; ++i) {
        list[i].rank = i + 1;
        printf("Name : ");
        fgets(list[i].name, MAX_LIMIT, stdin);
        printf("Department: ");
        fgets(list[i].dept, MAX_LIMIT, stdin);
        printf("Institute : ");
        fgets(list[i].institute, MAX_LIMIT, stdin);
        printf("Address : ");
        fgets(list[i].address, MAX_LIMIT, stdin);
    }
    printf("                                               ----------- Candidate List -----------\n\n\n");
    for (int i = 0; i < n; ++i) {
        print_list(list[i]);
    }
    printf("\n");
}

int main() {
    struct rectangle r1; // only declaration
    printf("Enter length of the rectangle : ");
    scanf("%lf", &r1.length);
    printf("Enter breadth of the rectangle : ");
    scanf("%lf", &r1.breadth);
    calculate(r1);
    struct complex c1 = {3, '+', 5}; // declaration and initialization
    complex_number(c1);
    // size of data types are machine dependent
    printf("sizeof(struct rectangle) = %lu\n", sizeof(struct rectangle)); // 24
    printf("sizeof(struct candidate) = %lu\n", sizeof(struct candidate)); // 124
    printf("sizeof(struct complex) = %lu\n", sizeof(struct complex)); // 12
    candidate_list();
    return 0;
}
