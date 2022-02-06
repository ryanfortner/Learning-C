#include <stdio.h>

int feetToInches(double feet) {
    int inches = feet * 12;
    return inches;
}

int main(void) {
    int aValue = 8;
    int aLength = 0;
    aLength = 5 + aValue + feetToInches(3.5);
    printf("Calculated length: %d\n", aLength);
    aLength = 5;
    aLength = aLength + aValue;
    aLength = aLength + feetToInches(3.5);
    printf("Calculated length: %d\n", aLength);
}