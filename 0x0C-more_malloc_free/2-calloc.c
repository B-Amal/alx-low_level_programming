#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size in bytes of elements
 *
 * Return: pointer to the new allocated memory, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int size_a, i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	size_a = nmemb * size;
	a = malloc(size_a);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < size_a)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
