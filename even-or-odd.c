#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isNumberEven(int input);

int main(void) {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    
    if((isNumberEven(input))==true) {
        printf("%d is even.\n", input);
    } else if((isNumberEven(input))==false) {
        printf("%d is odd.\n", input);
    } else {
        printf("An error occured.\n");
    }

    return 0;
}

bool isNumberEven(int input) {
    // make initial assumption that input is odd
    bool isNumberEven = true;
    if((input % 2)==0) {
        isNumberEven = true;
    } else {
        isNumberEven = false;
    }
    return isNumberEven;
}