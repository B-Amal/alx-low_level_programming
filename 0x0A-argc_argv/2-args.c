#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count of arguments
 * @argv: array of pointers to arguments strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	/*
	 * while (argc--)
	 * printf("%s\n", *argv++);
	 */

	return (0);
}
