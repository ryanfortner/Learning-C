#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char text[100];
    FILE *fptr;

    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf("Error opening file!\n");
        
        // Program exits if the file pointer returns null.
        exit(1);
    }

    fscanf(fptr, "%s", &text);

    printf("Contents = %s", text);
    fclose(fptr);

    return 0;
}
