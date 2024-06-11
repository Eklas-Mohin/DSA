/**
 *    author: mohin
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LIMIT 26

// User-defined data types
struct Rectangle {
    double length;
    double breadth;
    double area;
};

struct Complex {
    int real;
    char sign; // Allocate 4 bytes but uses only 1 (concept --> padding)
    int imaginary;
};

struct Candidate {
    int rank;
    char name[MAX_LIMIT];
    char dept[MAX_LIMIT];
    char institute[MAX_LIMIT];
    char address[MAX_LIMIT];
};

// Function to calculate the area of a rectangle
void calculateArea(struct Rectangle r) {
    r.area = r.length * r.breadth;
    printf("Length = %0.2lf\nBreadth = %0.2lf\n", r.length, r.breadth);
    printf("Area = %0.2lf unit\n", r.area);
}

// Function to print a complex number
void printComplexNumber(struct Complex c) {
    printf("x = %d %c i%d \n", c.real, c.sign, c.imaginary);
}

// Function to print candidate details
void printCandidateDetails(struct Candidate c) {
    printf("      Rank: %03d", c.rank);
    printf("      Name: %-25s", c.name);
    printf("      Department: %-25s", c.dept);
    printf("      Institute: %-25s", c.institute);
    printf("      Address: %-25s\n", c.address);
}

// Function to create and print a list of candidates
void candidateList() {
    int n;
    char temp;

    printf("Number of candidates: ");
    scanf("%d", &n);
    scanf("%c", &temp); // To consume the newline character after the integer input

    struct Candidate list[n]; // Array of structure Candidate

    for (int i = 0; i < n; ++i) {
        list[i].rank = i + 1;
        printf("Name: ");
        fgets(list[i].name, MAX_LIMIT, stdin);
        list[i].name[strcspn(list[i].name, "\n")] = 0; // Remove the newline character
        printf("Department: ");
        fgets(list[i].dept, MAX_LIMIT, stdin);
        list[i].dept[strcspn(list[i].dept, "\n")] = 0;
        printf("Institute: ");
        fgets(list[i].institute, MAX_LIMIT, stdin);
        list[i].institute[strcspn(list[i].institute, "\n")] = 0;
        printf("Address: ");
        fgets(list[i].address, MAX_LIMIT, stdin);
        list[i].address[strcspn(list[i].address, "\n")] = 0;
    }

    printf("                                              ----------- Candidate List -----------\n\n");
    for (int i = 0; i < n; ++i) {
        printCandidateDetails(list[i]);
    }
    printf("\n");
}

int main() {
    struct Rectangle r1;

    printf("Enter length of the rectangle: ");
    scanf("%lf", &r1.length);
    printf("Enter breadth of the rectangle: ");
    scanf("%lf", &r1.breadth);
    calculateArea(r1);

    struct Complex c1 = {3, '+', 5}; // Declaration and initialization
    printComplexNumber(c1);

    // Size of data types are machine dependent
    printf("sizeof(struct Rectangle) = %lu\n", sizeof(struct Rectangle)); // 24
    printf("sizeof(struct Candidate) = %lu\n", sizeof(struct Candidate)); // 104
    printf("sizeof(struct Complex) = %lu\n", sizeof(struct Complex)); // 12

    candidateList();

    return 0;
}
