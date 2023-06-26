#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character.
 * @str: string.
 */
void puts2(char *str)
{
	int i, j = 0, len = 0;
	char *c = str;

	while (*c != '\0')
	{
		c++;
		len++;
	}
	j = len - 1;
	for (i = 0; i <= j; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
