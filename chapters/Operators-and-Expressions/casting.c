/***
casting.c
using explicit type conversion: casting. 
this is a way to cast a variable to another type.
***/

#include <stdio.h>

int main(void) {
    int numerator = 33, denominator = 5;
    double result = 0;
    result = numerator / denominator;
    printf("Truncation: %d / %d = %g\n", numerator, denominator, result);
    result = (double)numerator / denominator;
    printf("No truncation: %f / %d = %f\n", (double)numerator, denominator, result);
    result = numerator / (double)denominator;
    printf("%d / %f = %f\n", denominator, (double)numerator, result);
    return 0;
}