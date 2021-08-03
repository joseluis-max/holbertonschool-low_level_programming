#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t
 * @head: pointer struct listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *h;

	if (*head == NULL || head == NULL)
		return;
	h = *head;
	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
	*head = NULL;
	head = NULL;
}
