#include <stdio.h>
/*
 * division - a sample division
 * @n: long int
 * Return: 0 if n is prime
*/

int division(long int n)
{
	long int x;

	if (n % 2 == 0)
	{
		printf("%lu = %lu * %i\n", n, n / 2, 2);
		return (0);
	}

	x = 3;
	while (x * x <= n)
	{

		if (n % x == 0)
		{
			printf("%lu = %lu * %lu\n", n, n / x, x);
			return (0);
		}
		else
		{
			x += 2;
		}
	}
	printf("%lu = %lu * %i\n", n, n, 1);
	return (0);
}
