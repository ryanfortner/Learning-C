/***
convert-temperature.c
simple c program to convert celsius to fahrenheight and vice versa.
***/
#include <stdio.h>

// function prototypes
double celsiusToFahrenheight(double degreesC);
double fahrenheightToCelsius(double degreesF);

int main(void) {
    int c = 0, f = 32;
    printf("%d Celsius is %d Fahrenheight\n", c, (int)celsiusToFahrenheight(c));
    printf("%d Fahrenheight is %d Celsius\n\n", f, (int)fahrenheightToCelsius(f));

    c = 100, f = 212;
    printf("%d Celsius is %d Fahrenheight\n", c, (int)celsiusToFahrenheight(c));
    printf("%d Fahrenheight is %d Celsius\n\n", f, (int)fahrenheightToCelsius(f));

    c = f = 50;
    printf("%d Celsius is %d Fahrenheight\n", c, (int)celsiusToFahrenheight(c));
    printf("%d Fahrenheight is %d Celsius\n\n", f, (int)fahrenheightToCelsius(f));

    return 0;
}

// function definitions

// convert celsius to fahrenheight
double celsiusToFahrenheight(double degreesC) {
    double degreesF = (degreesC * 9 / 5)+ 32;
    return degreesF;
}

// convert fahrenheight to celsius
double fahrenheightToCelsius(double degreesF) {
    double degreesC = (degreesF - 32) * 5 / 9;
    return degreesC;
}
