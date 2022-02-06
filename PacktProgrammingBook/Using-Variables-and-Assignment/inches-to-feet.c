#include <stdio.h>

// function prototypes
double inchesToFeet(double);

int main(void) {
    double inches = 1024;
    double feet = 0;
    feet = inchesToFeet(inches);
    printf("%f inches is equal to %f feet\n", inches, feet);
    return 0;
}

// given inches, convert to feet
double inchesToFeet(double someInches) {
    double someFeet = someInches / 12;
    return someFeet;
}