#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, n_rev;

	if (n == 0)
		_putchar('0');
	i = 0;
	n_rev = 0;
	while (n > 0)
	{
		n_rev = n_rev << 1;
		n_rev += n & 1;
		i++;
		n = n >> 1;
	}
	while (n_rev > 0)
	{
		_putchar((n_rev & 1) + '0');
		n_rev = n_rev >> 1;
		i--;
	}
	if (i > 0)
	{
		while (i != 0)
		{
			_putchar('0');
			i--;
		}
	}
}
