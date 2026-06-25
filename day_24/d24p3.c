#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, j = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}