#include <stdlib.h>
#include "main.h"

/**
 * str_concat - derived ends of input and add together for size
 * @s1: first input to concat
 * @s2: second input to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, g;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = g = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[g] != '\0')
		g++;

	cat = malloc(sizeof(char) * (i + g + 1));
	if (cat == NULL)
		return (NULL);

	i = g = 0;
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[g] != '\0')
	{
		cat[i] = s2[g];
		i++;
		g++;
	}
	cat[i] = '\0';
	return (cat);
}
