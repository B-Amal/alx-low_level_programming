#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character
 *
 * Return: pointer to the array on success, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	i = 0;
	if (size != 0)
	{
		a = malloc(size * sizeof(char));
		if (a == NULL)
		{
			return (NULL);
		}
		while (i < size)
		{
			a[i] = c;
			i++;
		}
		return (a);
	}
	else
		return (NULL);
}
