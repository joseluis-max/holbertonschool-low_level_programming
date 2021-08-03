#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t
 * @head: pointer struct listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
	free(tmp);
}
