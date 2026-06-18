#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40};
    int b[] = {15, 20, 25, 30, 35};
    int m = 4, n = 5;

    printf("Common Elements: ");
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