#include <stdio.h>
#include <stdlib.h>

struct Salary {
    int empId;
    float basic, hra, da, gross;
};

void addSalary(FILE *fp) {
    struct Salary s;
    printf("Enter Employee ID: ");
    scanf("%d", &s.empId);
    printf("Enter Basic: ");
    scanf("%f", &s.basic);
    printf("Enter HRA: ");
    scanf("%f", &s.hra);
    printf("Enter DA: ");
    scanf("%f", &s.da);
    s.gross = s.basic + s.hra + s.da;
    fwrite(&s, sizeof(s), 1, fp);
    printf("Salary record added successfully.\n");
}

void displaySalary(FILE *fp) {
    struct Salary s;
    rewind(fp);
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("EmpID: %d | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
               s.empId, s.basic, s.hra, s.da, s.gross);
    }
}

int main() {
    FILE *fp = fopen("salary.dat", "ab+");
    int choice;
    do {
        printf("\n1. Add Salary\n2. Display Salary\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) addSalary(fp);
        else if (choice == 2) displaySalary(fp);
    } while (choice != 3);
    fclose(fp);
    return 0;
}