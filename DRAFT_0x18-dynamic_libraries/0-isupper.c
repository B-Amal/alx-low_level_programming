#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character to check.
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int x = 0;
	int i = 'A';

	while (i <= 'Z')
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
