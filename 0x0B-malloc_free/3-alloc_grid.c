#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make a grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **k;
	int i, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	k = malloc(sizeof(int *) * height);
	if (k == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		k[i] = malloc(sizeof(int) * width);
		if (k[i] == NULL)
		{
			for (; i >= 0; i--)
				free(k[i]);
			free(k);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (z = 0; z < width; z++)
			k[i][z] = 0;
	}
	return (k);
}
