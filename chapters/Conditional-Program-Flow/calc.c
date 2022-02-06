#include <stdio.h>
#include <stdbool.h>

// function prototypes
double calc(double operand1, double operand2, char operator);

int main(void) {
    int a, b;
    char c;
    printf("Enter two operands, separated by an operation. Make sure to add the spaces between the parts.\n");
    printf("Supported operations: +, -, *, /, %.\n");
    printf("Example: 5 + 3\n");
    printf("User input: ");
    scanf("%d %c %d", &a, &c, &b);
    calc(a, b, c);
    return 0;
}

double calc(double operand1, double operand2, char operator) {
    double result = 0;

    printf("%g %c %g = ", operand1, operator, operand2);
    switch(operator) {
        case '+':
            result = operand1 + operand2; 
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 == 0) {
                printf("Error: division by %g is undefined!\n", operand2);
                return result;
            } else {
                result = operand1 / operand2;
            }
            break;
        case '%':
            // Remaindering: assume operations on integers (cast first)
            result = (int)operand1 % (int)operand2;
            break;
        default:
            printf("Error: unknown operator, must be +, -, *, /, or %\n");
            return result;
            break;
    }
    // break brings us to here
    printf("%g\n", result);
    return result;
}

/*
Another way to write the calc function is by using multiple if statements as shown below.

double calc(double operand1, double operand2, char operator) {
    double result = 0;

    printf("%g %c %g = ", operand1, operator, operand2);
    if(operator == '+') {
        result = operand1 + operand2;
    } else if(operator == '-') {
        result = operand1 - operand2;
    } else if(operator == '*') {
        result = operand1 * operand2;
    } else if(operator == '/') {
        if(operand2 == 0) {
            printf("Error: division by %g is undefined!", operand2);
            return result;
        } else {
            result = operand1 / operand2;
        }
    } else if(operator == '%') {
        // Remaindering: assume operations on integers (cast first)
        result = (int)operand1 % (int)operand2;
    } else {
        printf("Error: unknown operator!\n");
    }
    printf("%g\n", result);
    return result;
}
*/
