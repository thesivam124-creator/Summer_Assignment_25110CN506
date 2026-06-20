#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], Sum[SIZE][SIZE];
    printf("Enter elements of matrix A:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&A[i][j]);

    printf("Enter elements of matrix B:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&B[i][j]);

    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            Sum[i][j] = A[i][j] + B[i][j];

    printf("Sum of matrices:\n");
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++)
            printf("%d ",Sum[i][j]);
        printf("\n");
    }
    return 0;
}