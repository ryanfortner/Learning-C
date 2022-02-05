#include <stdbool.h> // needed for bool, true, false

int main(void) {
    /* types of variables, just declaring them
    int aNumber;
    long aBigNumber;
    long long aReallyBigNumber;
    float inches;
    float feet;
    float yards;
    double length, width, height;
    bool isItRaining;
    */
    
    // a better format, which actually initializes the variable and gives it a starting value
    int aNumber = 10;
    long aBigNumber = 3211145;
    long long aReallyBigNumber = 425632238789;
    float inches = 33.0;
    float feet = 2.5;
    float yards = 1780;
    double length = 1, width = 2, height = 10;
    bool isItRaining = false;

    // literal constants
    feet = inches / 12.0;
    yards = feet / 3.0;

}