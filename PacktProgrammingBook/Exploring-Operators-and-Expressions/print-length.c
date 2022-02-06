#include <stdio.h>

// function prototypes
void printLength(double meters);

int main(void) {
    printLength(0);
    printLength(1);
    printLength(12 / 39.67); // nearly 1 foot
    printLength(2.5);
}

void printLength(double meters) {
    double feet = meters * 39.67 / 12;
    printf("Length = %f meter%c\n", meters, meters == 1.0 ? ' ' : 's');
    printf("Length = %f %s\n", feet, 0.99995 < feet && feet < 1.00005 ? "foot" : "feet");
}