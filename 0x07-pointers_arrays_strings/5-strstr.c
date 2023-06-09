#include "main.h"
/**
 * _strstr - finds the first occurrenec of the substring
 * @haystack: main string to be scanned
 * @needle: string to be searched within the haystack string
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
