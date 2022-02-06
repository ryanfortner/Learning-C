/***
prefixpostfix.c
shows the differences between postfix and prefix incrementation
***/

#include <stdio.h>

int main(void) {
    int aValue = 5;

    // demonstrate prefix incrementation
    printf("Initial: %d\n", aValue);
    printf("Prefix: %d\n", ++aValue); // prefix incrementation shown here.
    printf("Final: %d\n\n", aValue);

    aValue = 5; // reset aValue to 5

    // demonstrate postfix incrementation
    printf("Initial: %d\n", aValue);
    printf("Postfix: %d\n", aValue++); // postfix incrementation shown here.
    printf("Final: %d\n", aValue);

    // a more predictable result: increment in isolation.
    aValue = 5;
    ++aValue;
    printf("++aValue (alone) == %d\n", aValue);
    aValue = 5;
    aValue++;
    printf("aValue++ (alone) == %d\n", aValue);

    return 0;
}