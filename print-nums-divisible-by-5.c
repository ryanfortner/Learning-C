#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int num = 100;
    printf("num = %d\n", num);

    for(i = 1; i <= num; i++) {
        if((i % 5)==0) {
            printf("%d is divisible by 5.\n", i);
        }
    }

    return 0;
}
