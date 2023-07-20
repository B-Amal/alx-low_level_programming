#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *string_word;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i < n)
	{
		string_word = va_arg(args, char *);
		if (string_word == NULL)
			printf("(nil)");
		else
			printf("%s", string_word);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
