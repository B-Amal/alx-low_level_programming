#include "main.h"

/**
 * _abs - The function computes the absolute value of an integer.
 * @n: The number to use.
 * Return: the abs value of the number.
 */
int _abs(int n)
{
	int x;

	if (n < 0)
	{
		x = n * -1;
		return (x);
	}
	return (n);
}
