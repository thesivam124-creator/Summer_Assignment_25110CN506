#include <stdio.h>

int main() {
    int choice;
    double a, b;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice>=1 && choice<=4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch(choice) {
            case 1: printf("Result: %.2lf\n", a+b); break;
            case 2: printf("Result: %.2lf\n", a-b); break;
            case 3: printf("Result: %.2lf\n", a*b); break;
            case 4: 
                if(b!=0) printf("Result: %.2lf\n", a/b);
                else printf("Error: Division by zero.\n");
                break;
        }
    } while(choice!=5);

    return 0;
}