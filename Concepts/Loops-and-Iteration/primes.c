#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num);

int main(void) {
    int num;
    printf("Check if a number is prime.\nEnter a number: ");
    scanf("%d", &num);
    if ((isPrime(num))==true) {
        printf("%d is prime.\n", num);
    } else if ((isPrime(num))==false) {
        printf("%d is not prime.\n", num);
    } else {
        printf("An error occured.\n");
    }
    return 0;
}

bool isPrime(int num) {
    if(num<2) return false;
    if(num==2) return true;

    bool isPrime=true; //make initial assumption that the number is prime
    for(int i=2; i<num; i++) {
        if((num%i)==0) {
            //we found a divisor of num, so num is not prime.
            isPrime = false;
            break; //no need to keep checking, so we can exit the loop.
        }
    }
    return isPrime;
}