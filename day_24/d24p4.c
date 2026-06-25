#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int hash[256] = {0};
    int i = 0, j = 0;
    while (str[i]) {
        if (hash[(unsigned char)str[i]] == 0) {
            hash[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}