#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a linked list
* @head: list to be released
*/
void free_list(list_t *head)
{
	list_t *mp;

	while (*head)
	{
	mp = (*head).next;
	free(head);
	free(head->str);
	head = mp;
	}
}
