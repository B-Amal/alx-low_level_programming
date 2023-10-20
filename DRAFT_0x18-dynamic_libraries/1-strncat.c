#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src.
 * @src: string.
 * @dest: string.
 * @n: integer, bytes.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
