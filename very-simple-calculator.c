/*******
This code was written with assistance from @Itai-Nelken.
It's a super simple calculator written in the C programming language.
*******/

#include <stdio.h>
#include <stdlib.h>
#define PROGEXECNAME "./very-simple-calculator"

// the #define part isn't anything necessary,  its called a 'macro' and is like a variable but can be passed between C files

void help() {
    printf("\e[1mUsage:\e[0m %s [num1] [operation] [num2]\n", PROGEXECNAME);
    printf("\e[1mSupported operations:\e[0m +, -, x, /.  x=*\n");
}

int main(int argc, char **argv) {
    int num1, num2;
    while(argc==4) {
        // atoi takes a character (char) and changes it to a integer (int)
        num1=atoi(argv[1]);
        num2=atoi(argv[3]);
        if(*argv[2]=='+') { // argv[2][0] is the same as *argv[2]
            printf("%d + %d = \e[1m%d\e[0m\n", num1, num2, num1+num2);
            break;
        } else if(*argv[2]=='-') {
            printf("%d - %d = \e[1m%d\e[0m\n", num1, num2, num1-num2);
            break;
        } else if(*argv[2]=='x'|| *argv[2]=='*') {
            printf("%d * %d = \e[1m%d\e[0m\n", num1, num2, num1*num2);
            break;
        } else if(*argv[2]=='/') {
            printf("%d / %d = \e[1m%d\e[0m\n", num1, num2, num1/num2);
            break;
        } else {
            fprintf(stderr, "\e[31m\e[1mInvalid operation!\e[0m\n");
            break;
        }
    }
    if(argc==1) {
        help();
    }
    return 0;
}
