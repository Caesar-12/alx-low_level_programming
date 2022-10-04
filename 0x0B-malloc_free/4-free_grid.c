#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees mwmory space
 * @grid: 2d grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
