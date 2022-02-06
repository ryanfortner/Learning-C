#include <stdio.h>

// function prototypes
void describeTemp(double degreesF);

int main(void) {
    int a;
    printf("Enter the temperature, in Fahrenheight: ");
    scanf("%d", &a);
    describeTemp(a);
    return 0;
}

void describeTemp(double degreesF) {
    char* message;
    if(degreesF > 100) message = "hot! Stay in the shade.\n";
    else if(degreesF >= 80) message = "perfect weather for swimming.\n";
    else if(degreesF >= 60) message = "very comfortable.\n";
    else if(degreesF >= 40) message = "it's a little chilly.\n";
    else if(degreesF >= 20) message = "freezing!\n";
    else message = "it's way too cold to do anything!\n";
    printf("%gF is %s", degreesF, message);
}
