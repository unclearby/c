#include <stdio.h> // Include Standard Input/Output Library.
#include <stdbool.h>

void main() {
    int Integer = 1000; // You can change the value of the variable.

    printf("Line 05: %d\n", Integer);

    Integer = 1000 * 1500;
    printf("Line 09: %d\n", Integer);

    const int Integer2 = 100000; // You cannot change the value of the variable.
    printf("Line 12: %d\n", Integer2);

    // Integer2 = 100000 * 150000;
    // printf("Line 15: %d", Integer2);
    // You cannot build the app. :(

    bool isTrueVariable  = true; // 1
    bool isFalseVariable = false; // 0

    printf("Line 19: %d\n", isTrueVariable);
    printf("Line 20: %d\n", isFalseVariable);

    float Floooooat = 1500.58;
    printf("Line 25: %f\n", Floooooat);


    char Character = 'R'; // Character
    printf("Line 29: %c\n", Character);


    // String
    const char iString[] = "Hi C.";
    printf("Line 34: %s\n", iString);


    double Double = 1500.58;
    printf("Line 38: %0.3lf\n", Double);
    

    /**
     * 
     * |             Type             |           Size         |                                  Range                                     | Format Specifier
     * |------------------------------|------------------------|----------------------------------------------------------------------------|------------------|
     * |   `short int`                |  `2 byte`              | `-32,768` to `32,767`                                                      | `%hd`            |
     * |   `unsigned int`             |  `2 or 4 bytes`        | `0 to 65,535 (2 bytes)` `0 to 4,294,967,295 (4 bytes)`                     | `%u`             |
     * |   `long int`                 |  `4 or 8 bytes`        | `-2,147,483,648 to 2,147,483,647 (4 bytes)` `-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (8 bytes)` | `%ld` |
     * |   `long long int`            |  `8 bytes`             | `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807`                | `%lld`           |
     * |   `unsigned long int`        |  `4 or 8 bytes`        | `0 to 4,294,967,295 (4 bytes)` `0 to 18,446,744,073,709,551,615 (8 bytes)` | `%lu`            |
     * |   `unsigned long long int`   |  `8 bytes`             | `0 to 18,446,744,073,709,551,615`                                          | `%llu`           |
     * |   `long double`              |  `8, 12, or 16 bytes`  | Implementation-dependent, but more precision than `double`                 | `%Lf`            |
     * 
     */
    char HoverMe;
}