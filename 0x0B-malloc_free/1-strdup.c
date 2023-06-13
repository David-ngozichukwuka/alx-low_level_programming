#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - replicate to new memory space location
 * @str: character
 * Return: 0
 */

char *_strdup(char *str)
{
	char *p;
	int i, y = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i = i + 1;

	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		p[y] = str[y];

	return (p);
}
