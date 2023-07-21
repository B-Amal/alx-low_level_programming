#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: the format string
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char const *f = format;
	char *separator = ", ", *s;
	va_list args;

	if (f == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (*f)
	{
		while (*(f + 1) == '\0')
		{
			separator = "";
			break;
		}
		switch (*f)
		{
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				break;
			case 'i':
				printf("%i%s", va_arg(args, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), separator);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", s, separator);
				break;
		}
		f++;
	}
	printf("\n");
	va_end(args);
}
