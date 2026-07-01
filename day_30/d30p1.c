#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[100];
    int count=0, choice, id, i;
    char name[50];

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n2. Display Students\n3. Search by Name\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Age, Marks: ");
                scanf("%d %s %d %f", &students[count].id, students[count].name,
                      &students[count].age, &students[count].marks);
                count++;
                break;
            case 2:
                for(i=0; i<count; i++) {
                    printf("ID:%d Name:%s Age:%d Marks:%.2f\n",
                           students[i].id, students[i].name,
                           students[i].age, students[i].marks);
                }
                break;
            case 3:
                printf("Enter name to search: ");
                scanf("%s", name);
                for(i=0; i<count; i++) {
                    if(strcmp(students[i].name, name)==0) {
                        printf("Found: ID:%d Age:%d Marks:%.2f\n",
                               students[i].id, students[i].age, students[i].marks);
                        break;
                    }
                }
                if(i==count) printf("Student not found.\n");
                break;
        }
    } while(choice!=4);

    return 0;
}