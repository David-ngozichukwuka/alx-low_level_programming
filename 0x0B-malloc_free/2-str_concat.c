#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - joins two character strings together
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ccat;
	int a, b, c, c1, c2;

	c1 = c2 = 0;

	if (s1 != NULL)
	{
	a = 0;
	while (s1[a++] != '\0')
	c1++;
	}

	if (s2 != NULL)
	{
	a = 0;
	while (s2[a++] != '\0')
	c2++;
	}

	c = c1 + c2;
	ccat = (char *)malloc(sizeof(char) * (c + 1));
	if (ccat == NULL)
	return (NULL);

	for (a = 0; a < c1; a++)
	ccat[a] = s1[a];

	for (b = 0; b < c2; b++, a = a + 1)
	ccat[a] = s2[b];
	ccat[c] = '\0';

	return (ccat);
}
