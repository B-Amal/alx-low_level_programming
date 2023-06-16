#include <stdio.h>
/**
 * main - The program starts with 0, prints all single digit num of base 10.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');

	return (0);
}
