#include <stdlib.h>
#include "main.h"

/**
 * *array_range - displays an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: pointer to an  array
 */
int *array_range(int min, int max)
{
	int *str;
	int g, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	str = malloc(sizeof(int) * size);

	if (str == NULL)
		return (NULL);

	for (g = 0; min <= max; g++)
		str[g] = min++;

	return (str);
}
