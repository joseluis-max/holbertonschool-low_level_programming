#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free double linked lists
 * @head: pointer double linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
