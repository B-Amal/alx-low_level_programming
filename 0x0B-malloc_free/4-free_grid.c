#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory of 2 dimensional grid
 * @grid: 2D array
 * @height: number of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
