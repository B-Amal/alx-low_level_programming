#include <stdio.h>

/**
 * main - prints the program name with path.
 * @argc: count of arguments
 * @argv: array of pointers to arguments strings
 * Return: 0 on success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
