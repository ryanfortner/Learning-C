#include <stdio.h>

int main(void) {
    /* flag name */ /* bit pattern */
    const unsigned char lowercase 1; // 0000 0001
    const unsigned char bold 2; // 0000 0010
    const unsigned char italic 4; // 0000 0100
    const unsigned char underline 8; // 0000 1000

    unsigned char flags = 0;

    flags = flags | bold; // switch on bold
    flags = flags & ~italic; // switch off italic
    if((flags & underline) == underline) ... // test for underline bit on?
    if(flags & underline) ... // test for underline?
}