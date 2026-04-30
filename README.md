## Simple Code
```c
#include <stdio.h>

int main() {
    printf("Hi C. 👋🏻");
}
```

```sh
gcc (Get-Item *.c) -o app
```


```c
int main(void) {
    // This Variable Not Able to Change.
    // You cannot change the default value.
    const int i = 0;
    // If you tried to change the default value of "i" you will facing an error.

    i = (2 * 4);
    printf("%d", i);
    return 0;
}
```
```ssh
Error: Assignment of read-only variable 'i'                       
   22 |     i = (2 * 4); 
```


|       Type      |  Size   | Range | Format Specifier
|-----------------|---------|---------|---------|
|   `short int`   |  `2 byte`   | `-32,768` to `32,767` | `%hd` |
|   `unsigned int`   |  `2 or 4 bytes`   | `0 to 65,535 (2 bytes)` `0 to 4,294,967,295 (4 bytes)` | `%u` |
|   `long int`   |  `4 or 8 bytes`   | `-2,147,483,648 to 2,147,483,647 (4 bytes)` `-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (8 bytes)` | `%ld` |
|   `long long int`   |  `8 bytes`   | `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807` | `%lld` |
|   `unsigned long int`   |  `4 or 8 bytes`   | `0 to 4,294,967,295 (4 bytes)` `0 to 18,446,744,073,709,551,615 (8 bytes)` | `%lu` |
|   `unsigned long long int`   |  `8 bytes`   | `0 to 18,446,744,073,709,551,615` | `%llu` |
|   `long double`   |  `8, 12, or 16 bytes`   | Implementation-dependent, but more precision than `double` | `%Lf` |


## Headers

```sh
gcc (Get-Item headers/*.c) -o app
```

If you need to build header files and c. 😁