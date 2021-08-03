#include "lists.h"
#include <stdlib.h>
/** pop_listint - delete head and return data
 * @head: struct listint_t
 * Return: data n
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *node, *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	i = tmp->n;
	node = tmp->next;
	*head = node;
	free(tmp);
	return (i);
}
