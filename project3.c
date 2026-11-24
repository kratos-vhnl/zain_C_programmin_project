#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    float marks;
    char grade;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice, searchId, found, i;
    float totalMarks = 0, averageMarks = 0;

Main_menu:
    printf("\n========================================\n");
    printf(" STUDENT GRADE & RESULT MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    printf("1. Add Student Record\n");
    printf("2. Display All Student Records\n");
    printf("3. Search Student by ID\n");
    printf("4. Calculate Class Average\n");
    printf("5. Exit\n");
    printf("----------------------------------------\n");
    printf("Enter your choice (1-5): ");

    if (scanf("%d", &choice) != 1) {
        printf("\nInvalid input! Please enter a valid number.\n");

        while (getchar() != '\n');

        goto Main_menu;
    }

    switch (choice) {

        case 1:
            if (count >= MAX_STUDENTS) {
                printf("\nDatabase is full! Cannot add more students.\n");
                goto Main_menu;
            }

            printf("\n--- Add Student Record ---\n");
        return 0; 
    } 
}