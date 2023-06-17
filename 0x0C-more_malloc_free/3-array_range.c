#include "main.h"
#include <stdlib.h>

/**
 * *array_range - generates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored/number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int d, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (d = 0; min <= max; d++)
		ptr[d] = min++;
	return (ptr);
}
