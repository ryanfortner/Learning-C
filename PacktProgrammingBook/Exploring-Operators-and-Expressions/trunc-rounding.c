#include <stdio.h>

// function prototypes
void doubleFunc(double dbl);
void longintFunc(long int li);

int main(void) {
    float floatValue = 58.73;
    short int intValue = 13;
    longintFunc(intValue);
    longintFunc(floatValue); // possible truncation

    doubleFunc(floatValue);
    doubleFunc(intValue);

    return 0;
}

void doubleFunc(double dbl) {
    printf("doubleFunc %f\n", dbl);
}

void longintFunc(long int li) {
    printf("longintFunc %ld\n", li);
}