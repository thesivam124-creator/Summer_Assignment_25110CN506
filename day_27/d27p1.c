#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int age;
};

void addStudent(FILE *fp) {
    struct Student s;
    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    fwrite(&s, sizeof(s), 1, fp);
    printf("Student added successfully.\n");
}

void displayStudents(FILE *fp) {
    struct Student s;
    rewind(fp);
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll: %d | Name: %s | Age: %d\n", s.roll, s.name, s.age);
    }
}

int main() {
    FILE *fp = fopen("students.dat", "ab+");
    int choice;
    do {
        printf("\n1. Add Student\n2. Display Students\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) addStudent(fp);
        else if (choice == 2) displayStudents(fp);
    } while (choice != 3);
    fclose(fp);
    return 0;
}