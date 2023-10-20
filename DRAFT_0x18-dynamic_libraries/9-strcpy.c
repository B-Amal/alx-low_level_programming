#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer.
 * @src: pointer to string.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, l = 0;

	while (*(src + l) != '\0')
		l++;
	for (i = 0; i < l; i++)
		dest[i] = src[i];
	dest[l] = '\0';
	return (dest);
}
