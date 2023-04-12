#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a new memory address
 * @str: character string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *b;
	int a;
	int s = 0;

	if (str == NULL)
	return (NULL);

	while (str[s] != '\0')
	s++;

	b = (char *)malloc(sizeof(char) * (s + 1));
	if (b == NULL)
	return (NULL);

	for (a = 0; a < s; a++)
	b[a] = str[a];
	b[s] = '\0';

	return (b);
}
