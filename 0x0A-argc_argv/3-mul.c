#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the product
 * @argc: count of arguments
 * @argv: array of pointers to arguments strings
 *
 * Return: 0 on success, 1 when not receiving 2 arguments
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
