#include <stdio.h>

void main (void)
{
	int a = 0;

	do
	{
		printf (" a is equal to %d\n", a);
		a++;
	} while (a < 5);
	printf ("finally, a is equal to %d.\n", a);
}
