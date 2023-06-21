#include <stdio.h>

/**
 * main - prints the s of all the multiples of 3/5 below 1024
 *
 * Return: 0 on success
 */
int main(void)
{
	int x;
	int s = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			s += x;
	}
	printf("%d\n", s);
	return (0);
}
