#include "main.h"

/**
 * print_alphabet_x10 - The funstion prints 10 times the alphabet in lowercase.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
