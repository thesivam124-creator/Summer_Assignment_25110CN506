#include <stdio.h>

int main() {
    int n, key, i, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }
    printf("Frequency of %d = %d\n", key, count);
    return 0;
}