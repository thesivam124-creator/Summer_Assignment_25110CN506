#include <stdio.h>
#include <string.h>

// Student structure
struct Student {
    int id;
    char name[50];
    float marks;
} students[100];
int studentCount=0;

// Book structure
struct Book {
    int id;
    char title[50];
    int available;
} books[100];
int bookCount=0;

// Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
} employees[100];
int empCount=0;

// Functions
void addStudent() {
    printf("Enter ID, Name, Marks: ");
    scanf("%d %s %f", &students[studentCount].id, students[studentCount].name, &students[studentCount].marks);
    studentCount++;
}
void displayStudents() {
    for(int i=0; i<studentCount; i++)
        printf("ID:%d Name:%s Marks:%.2f\n", students[i].id, students[i].name, students[i].marks);
}

void addBook() {
    printf("Enter ID, Title: ");
    scanf("%d %s", &books[bookCount].id, books[bookCount].title);
    books[bookCount].available=1;
    bookCount++;
}
void displayBooks() {
    for(int i=0; i<bookCount; i++)
        printf("ID:%d Title:%s Status:%s\n", books[i].id, books[i].title, books[i].available?"Available":"Issued");
}

void addEmployee() {
    printf("Enter ID, Name, Salary: ");
    scanf("%d %s %f", &employees[empCount].id, employees[empCount].name, &employees[empCount].salary);
    empCount++;
}
void displayEmployees() {
    for(int i=0; i<empCount; i++)
        printf("ID:%d Name:%s Salary:%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
}

int main() {
    int choice;
    do {
        printf("\n--- Mini Project Menu ---\n");
        printf("1. Student System\n2. Library System\n3. Employee System\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                displayStudents();
                break;
            case 2:
                addBook();
                displayBooks();
                break;
            case 3:
                addEmployee();
                displayEmployees();
                break;
        }
    } while(choice!=4);
     return 0;
}