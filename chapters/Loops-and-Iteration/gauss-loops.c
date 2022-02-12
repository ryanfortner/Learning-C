/*
 * gauss-loops.c
 * an example of repetition using loops
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sumNviaWhile(int n);
int sumNviaWhile2(int n);
int sumNviaFor(int n);
int sumNviaFor2(int n);
int sumNviaDoWhile(int n);
int sumNviaDoWhile2(int n);

int main(void) {
    int n = 100;
    printf("The sum of 1..%d = %d (via while)\n", n, sumNviaWhile(n));
    printf("The sum of 1..%d = %d (via while 2)\n", n, sumNviaWhile2(n));
    printf("The sum of 1..%d = %d (via for)\n", n, sumNviaFor(n));
    printf("The sum of 1..%d = %d (via for 2)\n", n, sumNviaFor2(n));
    printf("The fum of 1..%d = %d (via do while)\n", n, sumNviaDoWhile(n));
    printf("The sum of 1..%d = %d (via do while 2)\n", n, sumNviaDoWhile2(n));
    return 0;
}

// while has the following syntax:
// while(continuation_expression) statement_body
int sumNviaWhile(int n) {
    int sum = 0;
    int num = 0;
    while(num < n) { // num: 0..99 (100 is not less than 100)
        sum += (num + 1); // off-by-one: shift 0..99 to 1..100.
        num++;
    }
    return sum;
}

int sumNviaWhile2(int n) {
    int sum = 0;
    while(n) { // n: n down to 1 (stops at 0)
        sum +=n;
        n--;
    }
    return sum;
}

// for has the following syntax
// for(counter_initialization; continuation_expression; counter_increment) statement_body
int sumNviaFor(int n) {
    int sum = 0;
    for(int num = 0; num < n; num++) { // num: 0..99 (it's a c thing)
        sum+= (num + 1); //off-by-one: shift 0..99 to 1..100.
    }
    return sum;
}

int sumNviaFor2(int n) {
    int sum = 0;
    for(int i = n; i > 0; i--) {
        sum += i;
    }
    return sum;
}

// do..while() has the following syntax:
// do statement_body while(continuation_expression);
int sumNviaDoWhile(int n) {
    int sum = 0;
    int num = 0;
    do {
        sum += (num + 1);
        num++;
    } while (num < n);
    return sum;
}

int sumNviaDoWhile2(int n) {
    int sum = 0;
    do {
        sum += n;
        n--;
    } while (n); //range: n down to 1 (stops at 0)
    return sum;
}