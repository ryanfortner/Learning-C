/***
write-num-to-file.c
writing num to a file in c
***/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    FILE *fptr;

    // use appropriate location if you're using macos, linux, windows, etc
    fptr = fopen("program.txt", "w");

    if(fptr == NULL) {
        printf("Error!\n");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", num);

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}
