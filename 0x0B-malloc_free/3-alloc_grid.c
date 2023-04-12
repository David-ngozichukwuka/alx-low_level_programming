#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a two dimensional integer array
 * @height: array height
 * @width: array width
 *
 * Return: a pointer to a two dimensional integer array
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **g;

	g = malloc(sizeof(int *) * height);
	if (g == NULL)
	return (NULL);

	if (width <= 0 || height <= 0)
	return (NULL);

	for (a = 0; a < height; a++)
	{
		g[a] = malloc(sizeof(int) * width);
		if (g[a] == NULL)
		{
			for (; a >= 0; a = a - 1)
				free(g[a]);
			free(g);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			g[a][b] = 0;
	}
	return (g);
}
