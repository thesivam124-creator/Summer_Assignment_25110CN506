#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = -1;
    char result;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if(freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", result);
    return 0;
}