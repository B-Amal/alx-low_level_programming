#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: prefix substring
 * Return: unsigned int n as the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
