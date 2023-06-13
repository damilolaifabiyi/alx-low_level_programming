#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - returns pointer to a 2 dimensional array
 * @grid: pointer to grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
