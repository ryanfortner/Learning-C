#include <stdio.h>

void main (void)
{
	int a = 0;

	while (a < 5)
	{
		int b = a;
		printf ("a is equal to %d and is greater than 5.\n", b);
		a++;
		printf ("after adding 1 to %d, a is equal to %d\n", b, a);
	}

	if (a == 0)
	{
		printf ("a is equal to 0\n");
	}
	else
	{
		printf ("a is not equal to 0\n");
		printf ("the final value of a is %d\n", a);
	}
}
