/**
 *    author: mohin
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct student {
    char name[25];
    int roll;
    int rank;
    char section;
};

void print_details(struct student data) {
    printf("Name: %s", data.name);
    printf("     Roll: %03d", data.roll);
    printf("     Rank: %03d", data.rank);
    printf("     Section: %c\n", data.section);
}

void change_section(struct student *data, char ch) {
    data->section = ch; // dereferencing
}

struct student* heap_memory() {
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));
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
    struct student s1 = {"Eklas Mohin", 112, 1, 'A'};
    print_details(s1); // call by value
    change_section(&s1, 'C'); // call by reference --> s1
    print_details(s1);
    struct student *ptr = heap_memory();
    print_details(*ptr);
    // Free the allocated memory
    free(ptr);
    return 0;
}
