#include <stdio.h>

/**
 * main - prints the program name with path.
 * @argc: count of arguments
 * @argv: array of pointers to arguments strings
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
