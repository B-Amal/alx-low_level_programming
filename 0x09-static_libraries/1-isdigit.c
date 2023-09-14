#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: digit to check.
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
	int x = 0;
	int i = '0';

	while (i <= '9')
	{
		if (i == c)
		{
			x = 1;
			break;
		}
		else
		{
			i++;
		}
	}
	return (x);
}
