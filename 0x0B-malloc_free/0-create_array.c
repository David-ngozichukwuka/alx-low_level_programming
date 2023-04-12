#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of size size of char c
 * @size: the array size
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	return (NULL);

	string = (char *)malloc(sizeof(char) * size);
	if (string == 0)
	return (NULL);

	for (i = 0; i < size; i = 1 + 1)
	string[i] = c;
	return (string);
}
