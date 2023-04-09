#include "main.h"
/**
 * _strchr - locates and prints characters in a string
 * @c: character to be searched for
 * @s: string to be searched
 *
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'; p = p + 1)
	{
		if (s[p] == c)
			return (&s[p]);
	}
	return (0);
}
