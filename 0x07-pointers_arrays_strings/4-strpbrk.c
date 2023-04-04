#include "main.h"
/**
 * _strpbrk - function that scans a string for a set of bytes
 * @s: intial occurrence in the string
 * @accept: pairs one of the bytes, NULL if no byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
				return (s);
		}
		s = s + 1;
	}
	return (0);
}
