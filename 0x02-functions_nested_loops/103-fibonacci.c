#include <stdio.h>

/**
 * main - The program prints the sum of the even-valued terms.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;
	unsigned long int j, k, x, s;

	j = 1;
	k = 2;
	s = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
			s = s + j;
		x = j + k;
		j = k;
		k = x;
	}
	printf("%lu\n", s);
	return (0);
}
