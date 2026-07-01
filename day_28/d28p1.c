#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int available;
};

void addBook(struct Book library[], int *count, char title[], char author[]) {
    strcpy(library[*count].title, title);
    strcpy(library[*count].author, author);
    library[*count].available = 1;
    (*count)++;
}

void displayBooks(struct Book library[], int count) {
    for(int i=0; i<count; i++) {
        printf("%s by %s - %s\n", library[i].title, library[i].author,
               library[i].available ? "Available" : "Issued");
    }
}

void issueBook(struct Book library[], int count, char title[]) {
    for(int i=0; i<count; i++) {
        if(strcmp(library[i].title, title)==0 && library[i].available) {
            library[i].available = 0;
            printf("Book issued successfully.\n");
            return;
        }
    }
    printf("Book not available.\n");
}

void returnBook(struct Book library[], int count, char title[]) {
    for(int i=0; i<count; i++) {
        if(strcmp(library[i].title, title)==0 && !library[i].available) {
            library[i].available = 1;
            printf("Book returned successfully.\n");
            return;
        }
    }
    printf("Invalid return.\n");
}

int main() {
    struct Book library[100];
    int count = 0;

    addBook(library, &count, "C Programming", "Dennis Ritchie");
    addBook(library, &count, "Data Structures", "Cormen");

    displayBooks(library, count);
    issueBook(library, count, "C Programming");
    displayBooks(library, count);

    return 0;
}