#include <stdio.h>

int main(void) {
    int limit, i, j;

    printf("Enter a table limit: ");
    scanf("%d", &limit);

    printf("limit is %d.\n", limit);

    for(i=1; i<= limit; i++) {
        for(j=1; j<= limit; j++) {
            if(j <= (limit - 1)) {
                printf("%d ", i*j);
            } else {
                printf("%d ", i * j);
            }
        }
        printf("\n");
    }
    return 0;
}