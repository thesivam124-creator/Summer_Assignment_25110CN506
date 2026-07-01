#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[100];
    int count=0, choice, id, i;
    char name[50];

    do {
        printf("\n--- Inventory Management ---\n");
        printf("1. Add Item\n2. Update Quantity\n3. Display Items\n4. Search Item\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
              case 1:
                printf("Enter ID, Name, Quantity, Price: ");
                scanf("%d %s %d %f", &inventory[count].id, inventory[count].name,
                      &inventory[count].quantity, &inventory[count].price);
                count++;
                printf("Item added.\n");
                break;
            case 2:
                printf("Enter ID to update: ");
                scanf("%d", &id);
                for(i=0; i<count; i++) {
                    if(inventory[i].id==id) {
                        printf("Enter new quantity: ");
                        scanf("%d", &inventory[i].quantity);
                        printf("Updated.\n");
                        break;
                    }
                }
                if(i==count) printf("Item not found.\n");
                break;
            case 3:
                for(i=0; i<count; i++) {
                    printf("ID:%d Name:%s Qty:%d Price:%.2f\n",
                           inventory[i].id, inventory[i].name,
                           inventory[i].quantity, inventory[i].price);
                }
                break;
            case 4:
                 printf("Enter name to search: ");
                scanf("%s", name);
                for(i=0; i<count; i++) {
                    if(strcmp(inventory[i].name, name)==0) {
                        printf("Found: ID:%d Qty:%d Price:%.2f\n",
                               inventory[i].id, inventory[i].quantity, inventory[i].price);
                        break;
                    }
                }
                if(i==count) printf("Item not found.\n");
                break;
        }
    } while(choice!=5);

    return 0;
}