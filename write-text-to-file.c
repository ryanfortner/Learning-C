/***
write-text-to-file.c
writing text to a file in c
***/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char text[100];
    FILE *fptr;

    // use appropriate location if you're using macos, linux, windows, etc
    fptr = fopen("program.txt", "w");

    if(fptr == NULL) {
        printf("Error!\n");
        exit(1);
    }

    printf("Enter text: ");
    scanf("%s", &text);

    fprintf(fptr, "%s", text);
    fclose(fptr);

    return 0;
}
