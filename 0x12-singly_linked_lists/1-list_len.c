#include <stdlib.h>
#include "lists.h"
/**
 * list_len - output the count of elements stored in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number = number + 1;
		h = (*h).next;
	}
	return (number);
}
