#include "main.h"

/**
 * print_last_digit -  The function prints the last digit of a number.
 * @n: The number to use.
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
