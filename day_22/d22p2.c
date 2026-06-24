#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200];
    int count = 0, i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for(i = 0; sentence[i] != '\0'; i++) {
        if((i == 0 && !isspace(sentence[i])) ||
           (isspace(sentence[i]) && !isspace(sentence[i+1]) && sentence[i+1] != '\0')) {
            count++;
        }
    }

    printf("Word count = %d\n", count);
    return 0;
}