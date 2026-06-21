#include <stdio.h>

int main() {
    int A[3][3];
    int i, j, sum;

    printf("Enter elements of 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<3;i++) {
        sum = 0;
        for(j=0;j<3;j++)
            sum += A[i][j];
        printf("Sum of row %d = %d\n", i+1, sum);
    }

    return 0;
}