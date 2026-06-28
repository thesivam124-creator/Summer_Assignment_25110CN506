#include <stdio.h>
#include <stdlib.h>

struct Marksheet {
    int roll;
    char name[50];
    int maths, physics, chemistry;
    float avg;
};

void addMarksheet(FILE *fp) {
    struct Marksheet m;
    printf("Enter Roll No: ");
    scanf("%d", &m.roll);
    printf("Enter Name: ");
    scanf("%s", m.name);
    printf("Enter Maths Marks: ");
    scanf("%d", &m.maths);
    printf("Enter Physics Marks: ");
    scanf("%d", &m.physics);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &m.chemistry);
    m.avg = (m.maths + m.physics + m.chemistry) / 3.0;
    fwrite(&m, sizeof(m), 1, fp);
    printf("Marksheet added successfully.\n");
}

void displayMarksheet(FILE *fp) {
    struct Marksheet m;
    rewind(fp);
    while (fread(&m, sizeof(m), 1, fp)) {
        printf("Roll: %d | Name: %s | Maths: %d | Physics: %d | Chemistry: %d | Avg: %.2f\n",
               m.roll, m.name, m.maths, m.physics, m.chemistry, m.avg);
    }
}

int main() {
    FILE *fp = fopen("marksheet.dat", "ab+");
    int choice;
    do {
        printf("\n1. Add Marksheet\n2. Display Marksheet\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) addMarksheet(fp);
        else if (choice == 2) displayMarksheet(fp);
    } while (choice != 3);
    fclose(fp);
    return 0;
}