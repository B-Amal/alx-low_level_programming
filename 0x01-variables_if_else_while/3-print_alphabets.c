#include <stdio.h>
/**
 * main - The program prints the alphabet in lowercase, then in uppercase.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
