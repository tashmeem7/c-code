#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Bot : Enter an operator from (+, -, *, /): ");
    scanf("%c", &operator);

  

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}