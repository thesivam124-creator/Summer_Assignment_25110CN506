#include <stdio.h>

int main() {
    int n, i, sum = 0, total;
    printf("Enter size of array (n-1): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements (1 to n with one missing): ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    total = (n+1) * (n+2) / 2;  // sum of 1..n+1
    printf("Missing number = %d\n", total - sum);
    return 0;
}