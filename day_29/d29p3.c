#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100];
    int choice;

    do {
        printf("\n--- String Operations ---\n");
        printf("1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter string: ");
                scanf("%s", str);
                printf("Length: %d\n", (int)strlen(str));
                break;
            case 2:
                printf("Enter string: ");
                scanf("%s", str);
                strcpy(str2, str);
                printf("Copied string: %s\n", str2);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", str);
                printf("Enter second string: ");
                scanf("%s", str2);
                  strcat(str, str2);
                printf("Concatenated: %s\n", str);
                break;
            case 4:
                printf("Enter first string: ");
                scanf("%s", str);
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str, str2)==0) printf("Strings are equal.\n");
                else printf("Strings are not equal.\n");
                break;
        }
    } while(choice!=5);

    return 0;
}