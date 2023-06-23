#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143.
 * Return: 0 on success.
 */
int main(void)
{
	long n = 612852475143;
	long x, m;
	double s = sqrt(n);

	for (x = 1; x <= s; x++)
	{
		if (n % x == 0)
			m = n / x;
	}
	printf("%ld", m);
	printf("\n");

	return (0);
}
