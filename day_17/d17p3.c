#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    int m = 4, n = 4;

    printf("Intersection: ");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}