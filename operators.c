#include <stdio.h>

int main(void) {
    int a = 2;
    int b;

    // arithmetic operators
    b = a++; // b is 2, a is 3
    b = ++a; // b is 4, a is 4
    printf("a is %d, b is %d\n", a, b);
    printf("a * b = %d\n", a * b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a / b = %d\n", a / b);

    // comparison operators
    // initial condition, test, increment 
	for (a = 0, b = 5; a < b; a++)
	{
        printf("a is equal to %d, b is equal to %d, but a is less than b so adding 1 to a.\n", a, b);
	}
	printf("the value of a is %d\n", a);
    a = 0;
    do
	{
		printf(" a is equal to %d\n", a);
		a++;
	} while (a < 5);

    // miscellaneous operators

    // ternary operator
    // condition ? value_if_true : value_if_false
    a = 10, b = 20;
    int c;
    c = (a < b) ? a : b;
    printf("%d\n", c); // 10

    // sizeof operator
    // returns the size of the operand you pass. You can pass a variable, or even a type
    int age = 37;
    printf("%ld\n", sizeof(age));
    printf("%ld\n", sizeof(int));
}