#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - appends a new node at the tails of a linked list
* @head: pointer to pointer
* @str: string to be appended
*
* Return: address of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *sum;
	unsigned int len = 0;

	while (str[len])
	len = len + 1;

	sum = malloc(sizeof(list_t));
	if (sum == NULL)
	return (NULL);
	sum->len = len;
	sum->str = strdup(str);
	sum->next = NULL;

	if (!head)
	{
	*head = sum;
	return (sum);
	}

	while (tmp->next)
	tmp = (*tmp).next;
	(*tmp).next = sum;
	return (sum);
}
