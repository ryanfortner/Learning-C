#include <stdio.h>
#include <stdbool.h>

// function prototypes
void printLogicalAND(bool z, bool o);
void printLogicalOR(bool z, bool o);
void printLogicalNOT(bool z, bool o);

int main(void) {
    bool one = 1, zero = 0;
    
    printLogicalAND(zero, one);
    printLogicalOR(zero, one);
    printLogicalNOT(zero, one);
    return 0;
}

void printLogicalAND(bool z, bool o) {
    bool zero_zero = z && z;
    bool zero_one = z && o;
    bool one_zero = o && z;
    bool one_one = o && o;

    printf("AND | %d | %d\n", z, o);
    printf("%d | %d | %d\n", z, zero_zero, zero_one);
    printf("%d | %d | %d\n\n", o, zero_one, one_one);
}

void printLogicalOR(bool z, bool o) {
    bool zero_zero = z || z;
    bool zero_one = z || o;
    bool one_zero = o || z;
    bool one_one = o || o;

    printf("OR | %d | %d\n", z, o);
    printf("%d | %d | %d\n", z, zero_zero, zero_one);
    printf("%d | %d | %d\n\n", o, zero_one, one_one);
}

void printLogicalNOT(bool z, bool o) {
    bool not_zero = !z;
    bool not_one = !o;
    printf("NOT\n");
    printf("%d | %d\n", z, not_zero);
    printf("%d | %d\n\n", o, not_one);
}