#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of size size of char c
 * @size: the array size
 * @c: intial character value
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	return (NULL);

	string = (char *)malloc(sizeof(char) * size);
	if (string == NULL)
	return (NULL);

	for (i = 0; i < size; i = i + 1)
	string[i] = c;
	return (string);
}
