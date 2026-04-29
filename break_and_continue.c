#include <stdio.h> // Include Standard Input/Output Library.

void main() { 
    int x = 10;
    printf("Starting The Loop\n");

    for(int i = 0; i <= x; i++) {
        if (i == 5) {
            printf("Skipping Number 5\n");
            continue;
        }

        if (i % 2 != 0) continue; 

        printf("Current Even Number: %d\n", i);
    }

    printf("Loop Finished.");
}