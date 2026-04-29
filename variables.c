#include <stdio.h> // Include Standard Input/Output Library.
#include <stdbool.h>

void main() { // Main Function
    int Int = 2;
    printf("Line 4: %d\n", Int);

    const bool isIntEqualZero = (Int == 0);
    printf("Line 8: Is line 5 equal zero?! %s\n", (isIntEqualZero == 1 ? "true" : "false"));
}