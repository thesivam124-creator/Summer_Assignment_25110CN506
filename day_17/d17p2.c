#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    int m = 4, n = 4;
    int unionArr[m+n], k=0;

    for(int i=0; i<m; i++)
        unionArr[k++] = a[i];
    for(int j=0; j<n; j++) {
        int found = 0;
        for(int i=0; i<m; i++) {
            if(b[j] == a[i]) {
                found = 1;
                break;
            }
        }
        if(!found) unionArr[k++] = b[j];
    }

    printf("Union Array: ");
    for(int i=0; i<k; i++)
        printf("%d ", unionArr[i]);
    return 0;
}