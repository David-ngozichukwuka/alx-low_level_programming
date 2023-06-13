#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2-dimensional array
 * @grid: 2-dimensional grid
 * @height: grid height dimension
 * Description: frees memory of grid
 * Return: null
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
