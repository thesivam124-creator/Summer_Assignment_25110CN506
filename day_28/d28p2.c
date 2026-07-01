#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char holderName[50];
    float balance;
};

void deposit(struct BankAccount *acc, float amount) {
    acc->balance += amount;
    printf("Deposited %.2f. New balance: %.2f\n", amount, acc->balance);
}

void withdraw(struct BankAccount *acc, float amount) {
    if(amount <= acc->balance) {
        acc->balance -= amount;
        printf("Withdrew %.2f. New balance: %.2f\n", amount, acc->balance);
    } else {
        printf("Insufficient funds.\n");
    }
}

void display(struct BankAccount acc) {
    printf("Account: %d, Holder: %s, Balance: %.2f\n",
           acc.accountNumber, acc.holderName, acc.balance);
}

int main() {
    struct BankAccount acc = {12345, "Sivam", 1000.0};
    display(acc);
    deposit(&acc, 500);
    withdraw(&acc, 300);
      display(acc);
    return 0;
}