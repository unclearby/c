#include <stdio.h> // Include Standard Input/Output Library.

void main() {
    int x = 0;

    while (x <= 10) {
        x++;
        printf("Line 6: %d\n", x);
    }

    do {
        x += 150;
        printf("Line 11: %d\n", x);
    } while(x <= 5);
}