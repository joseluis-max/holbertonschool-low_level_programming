#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - insert node
 * @head: pointer to struct listint_t
 * @idx: index
 * Return: listint_t
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (count < index - 1)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		count++;
	}
	copy = tmp->next;
	tmp->next = copy->next;
	free(copy);
	return (1);

}
