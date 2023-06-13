#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of size and assign char c
 * @size: array size
 * @c: char to assigned
 *
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *str;


	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
