#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all program arguments
 * @av: argument vector
 * @ac: argument count
 *
 * Return:  pointer to a new string
 */
char *argstostr(int ac, char **av)
{

	int a, b, c, d = 0;

	char *str;

	char *p;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (a = 0; a < ac; a++)
	{
		p = av[a];
		b = 0;

	while (p[b++])
		d++;
	}

	str = (char *)malloc(sizeof(char) * (d + 1));
	if (str == NULL)
		return (NULL);
	for (a = 0, b = 0; a < ac && b < d; a++)
	{
		p = av[a];
		c = 0;
	while (p[c])
	{
		str[b] = p[c];
		c++;
		b = b + 1;
	}
	str[b++] = '\n';
	}
	str[b] = '\0';

	return (str);
}
