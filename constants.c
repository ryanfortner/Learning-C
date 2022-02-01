#include <stdio.h>
//constants are below
#define APPNAME "constants"
#define APPVER "0.1"

/*
Notes:
- Constants are fixed values that the program may not alter during its execution.
- Uppercase is generally a constant while lowercase is generally a variable.
- Can't start with a digit
- can also be defined with `const int AGE = 37;`.
- you don't need to specify the type, the compiler will automatically do this.
- A common use of constants is to define the program version or program name.
*/

int main(void) {
    printf("This is %s v%s\n", APPNAME, APPVER);
}