/***
display-factors.c
print the factors of any given numToFactorber
***/

#include <stdio.h>

int main(void) {
    int numToFactor, i;
    printf("Enter the number you want to factor: ");
    scanf("%d", &numToFactor);
    // for loop is iterated until i is false
    // in each iteration, numToFactor is checked if it is divisible by i.
    // the condition is for i to be a factor of numToFactor.
    // then, the value of i is incremented by 1 and the process repeats.
    for (i = 1; i <= numToFactor; ++i) { // initial condition, test, increment
        if ((numToFactor % i) == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}