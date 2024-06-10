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

void print_details(struct Student data) {
    printf("Name: %s", data.name);
    printf("     Roll: %03d", data.roll);
    printf("     Rank: %03d", data.rank);
    printf("     Section: %c\n", data.section);
}

void change_section(struct Student *data, char ch) {
    data->section = ch; // Dereferencing
}

struct Student* heap_memory() {
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

    print_details(s1); // Call by value
    change_section(&s1, 'C'); // Call by reference --> s1
    print_details(s1);

    struct Student *ptr = heap_memory();
    print_details(*ptr);
    free(ptr); // Free the allocated memory

    return 0;
}