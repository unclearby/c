#include <stdio.h> // Include Standard Input/Output Library.
#include <stdbool.h>

void main() { // Main Function
    const char *Condition = "R";

    (Condition == "R") ? printf("Oh! The Condition Contains Letter R.\n") : printf("You've changed the default letter -_-\n");

    if(Condition == "R") {
        printf("Oh! The Condition Contains Letter R.\n");
    } else {
        printf("You've changed the default letter -_-\n");
    }

    const int IntCondition = 15;

    if (IntCondition >= 15) {
        printf("The condition is 15 or greater.\n");
    } else {
        printf("The condition is less than 15.\n");
    }

    const bool Status = true;


    if(IntCondition == 15 && Status == true) {
        printf("Okay! Glad to see that.\n");
    } else {
        printf("Oh! There is an issue.\n");
    }

    if(Condition == "R" || IntCondition == 15) {
        printf("Okay! Glad to see that. There a progress.\n");
    } else {
        printf("Oh! There is an issue. Your progress is weak. (-_-)\n");
    }
}