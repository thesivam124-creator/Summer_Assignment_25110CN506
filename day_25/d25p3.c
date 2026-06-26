#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"Zara", "Amit", "John", "Kiran", "Meena"};
    char temp[20];
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted Names:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);
    return 0;
}