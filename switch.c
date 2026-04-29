#include <stdio.h> // Include Standard Input/Output Library.

char GenerateLetter(int Integer);

void main() {
    const char R = GenerateLetter(0);
    printf("Line 6: %c\n", R);

    const char M = GenerateLetter(1);
    printf("Line 9: %c\n", M);

    const char B = GenerateLetter(2);
    printf("Line 12: %c\n", B);

    const char N = GenerateLetter(3);
    printf("Line 15: %c\n", N);

    const char QuestionMark = GenerateLetter(-1);
    printf("Line 18: %c\n", QuestionMark);
}

char GenerateLetter(int Integer) {
    switch(Integer) {
        case 0:
            return 'R';
        case 1:
            return 'M';
        case 2:
            return 'B';
        case 3:
            return 'N';
        default:
            return '?';
    }
}