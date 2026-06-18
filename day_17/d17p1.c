#include <stdio.h>

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int m = 3, n = 3;
    int merged[m+n];

    for(int i=0; i<m; i++)
        merged[i] = a[i];
    for(int j=0; j<n; j++)
        merged[m+j] = b[j];

    printf("Merged Array: ");
    for(int i=0; i<m+n; i++)
        printf("%d ", merged[i]);
    return 0;
}