#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory block
 *
 * Return: a pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1, *oldptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	p1 = malloc(new_size);
	if (!p1)
		return (NULL);
	oldptr = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p1[a] = oldptr[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p1[a] = oldptr[a];
	}
	free(ptr);
	return (p1);
}
