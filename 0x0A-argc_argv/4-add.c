#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count of arguments
 * @argv: array of pointers to arguments strings
 *
 * Return: 0 on success, 1+ERROR when symbols or not digits
 */
int main(int argc, char *argv[])
{
	int i;
	int s = 0;
	int c = 1;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (c < argc)
	{
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (!(isdigit(argv[c][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[c]);
		c++;
	}
	printf("%d\n", s);
	return (0);
}
