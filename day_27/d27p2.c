#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char dept[30];
};

void addEmployee(FILE *fp) {
    struct Employee e;
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter Name: ");
    scanf("%s", e.name);
    printf("Enter Department: ");
    scanf("%s", e.dept);
    fwrite(&e, sizeof(e), 1, fp);
    printf("Employee added successfully.\n");
}

void displayEmployees(FILE *fp) {
    struct Employee e;
    rewind(fp);
    while (fread(&e, sizeof(e), 1, fp)) {
        printf("ID: %d | Name: %s | Dept: %s\n", e.id, e.name, e.dept);
    }
}

int main() {
    FILE *fp = fopen("employees.dat", "ab+");
    int choice;
    do {
        printf("\n1. Add Employee\n2. Display Employees\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) addEmployee(fp);
        else if (choice == 2) displayEmployees(fp);
    } while (choice != 3);
    fclose(fp);
    return 0;
}