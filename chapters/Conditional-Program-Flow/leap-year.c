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

bool isLeapYear(int year) {
    // Leap yeards not part of the Gregorian calendar until after 1752.
    // Is the year before 1751?
    // If so, return FALSE.
    // If not, "fall through" to next condition.
    if(year < 1751) return false;

    // Is year a multiple of 4? (remainder will be 0)
    // If so, return TRUE.
    // If not, "fall through" and return false.
    if ((year % 4) == 0) return true;

    return false;
}