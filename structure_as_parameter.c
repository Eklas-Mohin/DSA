/**
 *    author: mohin
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Student {
    char name[25];
    int roll;
    int rank;
    char section;
};

void printDetails(struct Student data) {
    printf("Name: %s", data.name);
    printf("     Roll: %03d", data.roll);
    printf("     Rank: %03d", data.rank);
    printf("     Section: %c\n", data.section);
}

void changeSection(struct Student *data, char ch) {
    data->section = ch; // Dereferencing
}

struct Student* heapMemory() {
    struct Student *ptr;

    ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    strcpy(ptr->name, "Eklas Mohin");
    ptr->roll = 112;
    ptr->rank = 1;
    ptr->section = 'C';
    
    return ptr;
}

int main() {
    struct Student s1 = {"Eklas Mohin", 112, 1, 'A'};

    printDetails(s1); // Call by value
    changeSection(&s1, 'C'); // Call by reference --> s1
    printDetails(s1);

    struct Student *ptr = heapMemory();
    printDetails(*ptr);
    free(ptr); // Free the allocated memory

    return 0;
}
