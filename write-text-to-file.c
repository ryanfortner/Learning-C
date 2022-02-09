/***
write-text-to-file.c
writing text to a file in c
***/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char sentence[1000];
    FILE *fptr;

    // use appropriate location if you're using macos, linux, windows, etc
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}
