#include <stdio.h>
#include <stdlib.h>

int listNumbers(int x, int y);

int main(void) {
    int x;
    int y;

    printf("List whole numbers from x to y.\n");
    printf("Enter an x (value to start at): ");
    scanf("%d", &x);
    printf("Enter a y (value to end at): ");
    scanf("%d", &y);
    printf("\nListing the whole numbers from %d to %d.\n", x, y);

    listNumbers(x, y);

    return 0;
}

int listNumbers(int x, int y) {
    int i, n;
    for(i=x; i<=y; i++) {
        printf("%d ", i);
    }
    printf("\n");
}