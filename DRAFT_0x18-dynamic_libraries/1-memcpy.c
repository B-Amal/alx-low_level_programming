#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to store copied bytes
 * @src: memory area to copy bytes from
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
