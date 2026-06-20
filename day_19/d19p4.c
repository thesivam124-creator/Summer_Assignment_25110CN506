#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE], sum=0;
    printf("Enter elements of matrix A:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&A[i][j]);

    for(int i=0;i<SIZE;i++)
        sum += A[i][i];  // main diagonal

    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}