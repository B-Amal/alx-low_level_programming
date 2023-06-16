#include <stdio.h>
/**
 * main - The program prints all the numbers of base 16 in lowercase
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
