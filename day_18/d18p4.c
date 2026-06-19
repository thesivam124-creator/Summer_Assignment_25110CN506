#include <stdio.h>

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortDescending(arr, n);

    printf("Array in Descending Order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}