#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0, choice;
    char name[50], phone[15];

    do {
        printf("\n1. Add Contact\n2. Delete Contact\n3. Search Contact\n4. Display Contacts\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter phone: ");
                scanf("%s", phone);
                strcpy(contacts[count].name, name);
                strcpy(contacts[count].phone, phone);
                count++;
                printf("Contact added.\n");
                break;
            case 2:
                printf("Enter name to delete: ");
                scanf("%s", name);
                for(int i=0; i<count; i++) {
                    if(strcmp(contacts[i].name, name)==0) {
                        strcpy(contacts[i].name, "");
                        strcpy(contacts[i].phone, "");
                        printf("Contact deleted.\n");
                        break;
                    }
                }
                break;
            case 3:
                printf("Enter name to search: ");
                scanf("%s", name);
                for(int i=0; i<count; i++) {
                    if(strcmp(contacts[i].name, name)==0) {
                        printf("Found: %s - %s\n", contacts[i].name, contacts[i].phone);
                        break;
                    }
                }
                break;
            case 4:
                for(int i=0; i<count; i++) {
                    if(strlen(contacts[i].name)>0)
                        printf("%s - %s\n", contacts[i].name, contacts[i].phone);
                }
                break;
        }
    } while(choice!=5);

    return 0;
}