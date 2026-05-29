#include <stdio.h>
#include <boolean.h>

void main() {
    int Age = 19;
    Boolean isUser = False;
    Boolean isOkay = 18 <= Age;

    if(isOkay) printf("You can drive the car. Go!!\n");

    (isUser ? printf("Yep! Is a user.") : printf("Nope! Isn't a user."));
}
