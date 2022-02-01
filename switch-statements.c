#include <stdio.h>

int main(void)
{
    int a = 10;
    
    if (a == 0)
    {
        printf("a is equal to 0\n");
    }
    else if (a == 1)
    {
        printf("a is equal to 1\n");
    }
    else
    {
        printf("a is not equal to 1 or 0\n");
        printf("value of a: %d\n", a);
    }

    // neater way of doing the above
    switch(a)
    {
        case 0: printf("a is equal to 0\n");
        break;
        case 1: printf("a is equal to 1\n");
        break;
        default: printf("a is not 1 or 0\n");
    }
}