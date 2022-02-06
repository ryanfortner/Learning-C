/***
fibonacci-sequence.c
simple c program to print x terms in the fibonacci sequence
***/

#include <stdio.h>

int main(void) {
    int numOfTerms, termsPrinted, t1 = 0, t2 = 1, nextTerm = t1 + t2;

    printf("print x terms in the fibonacci sequance.\n");
    printf("enter how many terms you want: ");
    scanf("%d", &numOfTerms);
    printf("ok, you want %d terms.\n", numOfTerms);

    // printing the first 2 terms so they can be added
    printf("Sequence: %d, %d, ",t1, t2);

    for (termsPrinted = 3; termsPrinted <= numOfTerms; ++termsPrinted) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}
