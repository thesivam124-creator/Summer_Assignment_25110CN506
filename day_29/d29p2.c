#include <stdio.h>

int main() {
    int arr[100], n=0, choice, i, pos, val;

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Search\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                arr[n++] = val;
                break;
            case 2:
                printf("Enter position to delete (0-based): ");
                scanf("%d", &pos);
                if(pos<n) {
                    for(i=pos; i<n-1; i++) arr[i]=arr[i+1];
                    n--;
                    printf("Deleted.\n");
                } else printf("Invalid position.\n");
                break;
            case 3:
                printf("Array: ");
                for(i=0; i<n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
             case 4:
                printf("Enter value to search: ");
                scanf("%d", &val);
                for(i=0; i<n; i++) {
                    if(arr[i]==val) {
                        printf("Found at position %d\n", i);
                        break;
                    }
                }
                if(i==n) printf("Not found.\n");
                break;
        }
    } while(choice!=5);

    return 0;
}