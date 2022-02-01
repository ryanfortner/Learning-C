#include <stdio.h>

/* Conditionals provide the programmer the ability to make choices.
    There are two ways to do this, either with `if` or with `switch`.
*/

int main(void) {
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if (a == 1) {
        printf("a is equal to 1\n");
    }
    else if (a == 2) {
        printf("a is equal to 2\n");
    }
    else {
        printf("a is not equal to 1 or 2\n");
    }
    printf("here is a simpler way of doing the above.\n");
    switch(a) {
        case 1:
            printf("a is equal to 1\n");
            break;
        case 2:
            printf("a is equal to 2\n");
            break;
        default:
            printf("a is not equal to 2 or 1\n");
            break;
    }
}

/*
int a = 1;
switch (a) {
 case 0:
 // do something
 break;
 case 1:
 // do something else
 break;
 case 2:
 // do something else 
 break;
 default:
 // handle all the other cases
 break;
}
*/