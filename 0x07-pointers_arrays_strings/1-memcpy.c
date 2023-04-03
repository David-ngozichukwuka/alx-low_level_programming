#include "main.h"

/**
*_memcpy - function that copies a block of memory from one location to another.
*@dest: destination of the copied block of memory
*@src: source memory block
*
*@n: size of memory in bytes
*
*Return: copied memory in dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m = m + 1;
	}
	return (dest);
}
