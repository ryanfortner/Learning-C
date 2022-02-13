/***
 * gauss-goto.c
 * an example of using the goto statement for unconditional branching
 ***/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sumNviaGoto_Do(int n);
int sumNviaGoto_While(int n);
int sumNviaGoto_For(int n);

int main(void) {
    int n = 100;
    printf("The sum of 1..%d = %d (via do-like goto loop)\n", n, sumNviaGoto_Do(n));
    printf("The sum of 1..%d = %d (via while-like goto loop)\n", n, sumNviaGoto_While(n));
    printf("The sum of 1..%d = %d (via for-like goto loop)\n", n, sumNviaGoto_For(n));
    return 0;
}

int sumNviaGoto_Do(int n) {
    int sum = 0;
    int num = 0;
begin_loop:
    sum += (num + 1);
    num++;
    if(num<n) goto begin_loop; // go up and repeat: loop!
    // else, fall through out of loop.
end_loop:
    return sum;
}

int sumNviaGoto_While(int n) {
    int sum = 0;
    int num = 0;
begin_loop:
    if(!(num<n)) goto end_loop;
    sum += (num + 1);
    num++;
    goto begin_loop;
end_loop:
    return sum;
}

int sumNviaGoto_For(int n) {
    int sum = 0;
    int num = 0;
    int i = 0;
begin_loop:
    if(!(i < n)) goto end_loop;
    sum += (num + 1);
    num++;
    i++;
    goto begin_loop;
end_loop:
    return sum;
}