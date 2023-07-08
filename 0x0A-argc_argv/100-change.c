#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: count of arguments
 * @argv: array of pointers to arguments strings
 *
 * Return: 0 on success, 1 oon error
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int c = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(*(argv + 1));
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		c++;
	}
	printf("%d\n", c);
	return (0);
}
