#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional array
 * @height: grid height
 * @grid: grid idc
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
