#include <stdio.h>

int main() {
    int i, j;
    int rows;
    printf("enter the number:");
    scanf("%d",&rows);

    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
printf("\n");
    }
return 0;
}