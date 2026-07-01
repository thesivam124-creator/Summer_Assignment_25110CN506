#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;
};

int main() {
    struct Book library[100];
    int count=0, choice, id, i;

    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n2. Display Books\n3. Issue Book\n4. Return Book\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Title, Author: ");
                scanf("%d %s %s", &library[count].id, library[count].title, library[count].author);
                library[count].available = 1;
                count++;
                break;
            case 2:
                for(i=0; i<count; i++) {
                    printf("ID:%d Title:%s Author:%s Status:%s\n",
                           library[i].id, library[i].title, library[i].author,
                           library[i].available ? "Available" : "Issued");
                }
                break;
             case 3:
                printf("Enter book ID to issue: ");
                scanf("%d", &id);
                for(i=0; i<count; i++) {
                    if(library[i].id==id && library[i].available) {
                        library[i].available=0;
                        printf("Book issued.\n");
                        break;
                    }
                }
                if(i==count) printf("Book not available.\n");
                break;
            case 4:
                printf("Enter book ID to return: ");
                scanf("%d", &id);
                for(i=0; i<count; i++) {
                    if(library[i].id==id && !library[i].available) {
                        library[i].available=1;
                        printf("Book returned.\n");
                        break;
                    }
                }
                if(i==count) printf("Invalid return.\n");
                break;
        }
    } while(choice!=5);

    return 0;
}