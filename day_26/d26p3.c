#include <stdio.h>

int main() {
    int balance = 10000, withdraw, deposit, choice;
    while (1) {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &withdraw);
                if (withdraw <= balance) {
                    balance -= withdraw;
                    printf("Withdraw successful. New balance: %d\n", balance);
                } else {
                    printf("Insufficient balance.\n");
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposit);
                balance += deposit;
                printf("Deposit successful. New balance: %d\n", balance);
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}