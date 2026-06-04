#include <stdio.h>
#include <math.h>

int main() {
    int n, en, r, m = 0;
    int sum = 0; 

    printf("Enter the number: ");
    scanf("%d", &n);

    en = n;


    while (en != 0) {
        en /= 10;
        ++m;
    }

    en = n;

 
    while (en != 0) {
        r = en % 10;
        sum += pow(r, m);
        en /= 10;
    }

    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}