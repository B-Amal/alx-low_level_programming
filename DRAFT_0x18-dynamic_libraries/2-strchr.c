#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to locate
 * Return: first occurrence if c is found, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
