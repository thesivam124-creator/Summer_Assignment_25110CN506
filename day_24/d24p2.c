#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i+1]) {
            count++;
        } else {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Compressed string: ");
    compressString(str);
    return 0;
}