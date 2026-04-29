#include <stdio.h>
#include <stdbool.h>

void main() {
    int Fvalue  = -1;
    int Svalue = -1;
    char Operator;
    char Operators[] = {'+', '-', '*', '/', '%'};

    printf("First Value?! - ");
    scanf("%d", &Fvalue);

    printf("Second Value?! - ");
    scanf("%d", &Svalue);

    bool isOkay = false;
    
    do {
        printf("\nSelect the Operator\n[+] Addition\n[-] Subtraction\n[*] Multiplication\n[/] Division\n[%%] Modulus\n\nSo?! ");
        scanf(" %c", &Operator);

        for (int i = 0; i < sizeof(Operators) / sizeof(Operators[0]); i++) {
            if (Operator == Operators[i]) {
                isOkay = true;
                break;
            }
        }

        if (!isOkay) {
            printf("Invalid Operator! Try Again :)\n");
        }
    } while(!isOkay);

    switch(Operator) {
        case '+' :
            printf("Results is %d", (Fvalue + Svalue));
            break;
        case '-': 
            printf("Results is %d", (Fvalue - Svalue));
            break;
        case '*':
            printf("Results is %d", (Fvalue * Svalue));
            break;
        case '/':
            printf("Results is %d", (Fvalue / Svalue));
            break;
        case '%':
            printf("Results is %d", (Fvalue % Svalue));
            break;
    }
}