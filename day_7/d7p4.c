#include <stdio.h>

int revN(int n) {
    int rev = 0;
    if (n == 0) return rev;
    rev = rev * 10 + (n % 10);
    return revN(n / 10);
}

int main() {
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    printf("%d\n", revN(num));
    return 0;
}