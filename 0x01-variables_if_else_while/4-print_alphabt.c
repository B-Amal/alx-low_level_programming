#include <stdio.h>
/**
 * main - The program prints the alphabet in lowercase, except q and e.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
	putchar(c);
	}
	putchar('\n');
	return (0);
}
