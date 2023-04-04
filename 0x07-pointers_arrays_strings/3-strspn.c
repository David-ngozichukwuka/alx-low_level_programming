#include "main.h"
/**
 * _strspn - a function that gets the length of a prefic substring
 * @s: input
 * @accept: input
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q = q + 1)
		{
			if (*s == accept[q])
			{
				n = n + 1;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (n);
		}
		s = s + 1;
	}
	return (n);
}
