#include <stdio.h>
#include <stdbool.h>

// function prototypes
bool isLeapYear(int);

int main(void) {
    int year;

    printf("Determine if a year is a leap year or not.\n\n");
    printf("Enter year: ");
    scanf("%d", &year);

    /* A simple way of printing the result.
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n");
    } else {
        printf("%d is not a leap year.\n", year);
    }*/

    // A more C-like version of printing the result
    printf("%d is%sa leap year.\n", year, isLeapYear(year) ? " " : " not ");

    return 0;
}

// isLeapYear logic conforms to the algorithm given at
// https://en.wikipedia.org/wiki/Leap_year
bool isLeapYear(int year) {
    bool isLeap = false;

    // leap years are not part of the Gregorian calendar until after 1752.
    if(year < 1751) // year is before leap years known
        isLeap = false;
    else if((year % 4) != 0) // year is not a multiple of 4
        isLeap = false;
    else if((year % 400) == 0) // year is a multiple of 400
        isLeap = true;
    else if((year % 100) == 0) // year is a multiple of 100
        isLeap = false;
    else
        isLeap = true; // year is a multiple of 4 (all other options have been considered)
    return isLeap;
}