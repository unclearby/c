#include <stdio.h>
#include <stdbool.h>
#include "helper.c"

bool IncludeInArray(const char* arr[], int size, const char* value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) { 
            return true; 
        }
    }

    return false;
}

void main() {
    int addVariable = add(2, 2);
    printf("Line 8: %d\n", addVariable);

    const char* Arr[] = {
        "MAHER",
        "AZIZ",
        "RAMY",
        "YASSIEN"
    };

    int size = sizeof(Arr) / sizeof(Arr[0]);

    const char* Key = "YASSIEN";
    (IncludeInArray(Arr, size, Key)) 
        ? printf("Line 31: Yep! %s is on the list.\n", Key) 
        : printf("Line 31: Nope! %s isn't on the list.\n", Key);
}