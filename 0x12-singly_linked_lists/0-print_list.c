#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_list - checks the code
 * @h: list name
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long int x = 0;

	while (h)
	{
		if (h->str == NULL)

		printf("[0]%p\n", (void *)NULL);

		else

		printf("[%u] %s\n", h->len, h->str);
		h = (*h).next;
		x++;
	}
	return (x);
}
