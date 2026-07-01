#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char dept[30];
    float salary;
};

int main() {
    struct Employee employees[100];
    int count=0, choice, id, i;

    do {
        printf("\n--- Employee Management ---\n");
        printf("1. Add Employee\n2. Display Employees\n3. Search by ID\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Dept, Salary: ");
                scanf("%d %s %s %f", &employees[count].id, employees[count].name,
                      employees[count].dept, &employees[count].salary);
                count++;
                break;
             case 2:
                for(i=0; i<count; i++) {
                    printf("ID:%d Name:%s Dept:%s Salary:%.2f\n",
                           employees[i].id, employees[i].name,
                           employees[i].dept, employees[i].salary);
                }
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for(i=0; i<count; i++) {
                    if(employees[i].id==id) {
                        printf("Found: Name:%s Dept:%s Salary:%.2f\n",
                               employees[i].name, employees[i].dept, employees[i].salary);
                        break;
                    }
                }
                if(i==count) printf("Employee not found.\n");
                break;
        }
    } while(choice!=4);

    return 0;
}