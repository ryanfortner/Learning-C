/***
functions.c
simple example of using functions in c
***/

#include <stdio.h>

// define printComma function.
// Between hello and world will be a comma when called.
void printComma() {
    printf(", ");
    return;
}

int main() {
    printf("Hello");
    printComma();
    printf("world!\n");
    return 0;
}