#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest number
 * @max: largest number
 *
 * Return: pointer to the new array, NULL on failure
 */
int *array_range(int min, int max)
{
	int size, i;
	int *a;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	a = malloc(size * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = min++;
	return (a);
}
