#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Quiz Application\n");

    printf("Q1: What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("Q2: Who is known as the father of C language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("Q3: Which company developed Java?\n");
    printf("1. Microsoft\n2. Sun Microsystems\n3. IBM\n4. Oracle\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("Your final score: %d/3\n", score);

    return 0;
}