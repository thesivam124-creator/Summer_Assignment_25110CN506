#include <stdio.h>

int main() {
    int A[3][3];
    int i, j, flag = 1;

    printf("Enter elements of 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }

    if(flag)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is Not Symmetric\n");

    return 0;
}