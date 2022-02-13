#include <stdio.h>

void main (void)
{
	int a;
	int b;

	/* initial condition, test, increment */
	for (a = 0, b = 5; a < b; a++)
	{
		printf ("a is equal to %d, b is equal to %d\n", a, b);
	}
	printf ("the final value of a is %d\n", a);
}
