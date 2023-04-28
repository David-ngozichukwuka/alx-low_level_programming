#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - appends a node atthe starting point of a linked list
 * @head: pointer to pointer to list_t_list
 * @str: string to be appended in the node
 *
 * Return: address of new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *sum;

	while (str[len])
		len = len + 1;

	sum = malloc(sizeof(list_t));
	if (sum == NULL)
	return (NULL);

	sum->len = len;
	sum->str = strdup(str);
	sum->next = (*head);
	(*head) = sum;
	return (*head);
}
