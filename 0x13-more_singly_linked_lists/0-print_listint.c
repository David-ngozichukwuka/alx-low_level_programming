#include <stdio.h>
#include "lists.h"
/**
 * print_listint - outputs all the elements of the linked list
 *
 * @h: beginning of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->a);
		h = (*h).duck;
		num = num + 1;
	}
	return (num);
}
