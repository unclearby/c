#include <stdio.h> // Include Standard Input/Output Library.

int main() { // Main Function
    int EMPTY_INTEGER = -1; 
    // printf("Line 5: %d", EMPTY_INTEGER);

    printf("Change the current value in Line 5: ");
    scanf("%d", &EMPTY_INTEGER);

    if(EMPTY_INTEGER == -1) {
        printf("Could you please an intener value.");
        return 1;
    }

    printf("Line 5 has successfully changed. Let's see %d", EMPTY_INTEGER);
    return 0;
}