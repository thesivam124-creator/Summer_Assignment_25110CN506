#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE], Transpose[SIZE][SIZE];
    printf("Enter elements of matrix A:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&A[i][j]);

    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            Transpose[j][i] = A[i][j];

    printf("Transpose of matrix:\n");
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++)
            printf("%d ",Transpose[i][j]);
        printf("\n");
    }
    return 0;
}