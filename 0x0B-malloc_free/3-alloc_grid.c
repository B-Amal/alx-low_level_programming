#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(*a));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(**a));
		if (a[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	i = 0;
	return (a);
}
