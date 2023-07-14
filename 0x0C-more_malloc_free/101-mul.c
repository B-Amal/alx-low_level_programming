#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


/**
 * _strlen - computes the length of a string
 * @s: string
 *
 * Return: length as integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


/**
 * _printerror - print Error and exit with a status of 98
 */
void _printerror(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}


/**
 * _mul - multiplies two positive numbers
 * @s1: 1st number string
 * @s2: 2nd number string
 *
 * Return: product after multiplication
 */
char *_mul(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(a = x = l1 + l2);
	if (!r)
		_printerror();
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			_printerror();
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				_printerror();
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}


/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: value of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char *result;
	int a = 0, i, len;

	if (argc != 3)
		_printerror();
	len = _strlen(argv[1]) + _strlen(argv[2]);
	result = _mul(argv[1], argv[2]);
	i = 0;
	while (i < len)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
		i++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
