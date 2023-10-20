#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to locate bytes in
 * @accept: string
 * Return: a pointer to the byte in s if found in accept, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return ('\0');
}
