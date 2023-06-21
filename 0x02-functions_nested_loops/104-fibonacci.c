#include <stdio.h>

/**
 * main - The program prints the first 98 Fibonacci numbers.
 *
 * Return: 0 on success.
 */
int main(void)
{
	unsigned long int x, i, ii, j, jj;
	unsigned long int y = 1;
	unsigned long int z = 2;
	unsigned long int l = 1000000000;

	printf("%lu", y);
	for (x = 1; x < 91; x++)
	{
		printf(", %lu", z);
		z += y;
		y = z - y;
	}
	i = (y / l);
	ii = (y % l);
	j = (z / l);
	jj = (z % l);
	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", j + (jj / l));
		printf("%lu", jj % l);
		j = j + i;
		i = j - i;
		jj = jj + ii;
		ii = jj - ii;
	}
	printf("\n");
	return (0);
}
