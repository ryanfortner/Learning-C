#include <stdio.h>

void printComma() {
    printf(", ");
    return;
}

int main() {
    printf("Hello");
    printComma();
    printf("world!\n");
    /* if "return 0;" does not exist, the value will automatically be assumed as 0, so its safe to exclude.
    return 0; */
}