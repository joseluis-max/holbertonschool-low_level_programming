#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete a node
 * @head: pointer to double linked list
 * @index: node to delete
 * Return: 1 success or -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp, *copy;

	if (head == NULL || *head == NULL)
		return (-1);
	copy = *head;
	while (copy)
	{
		if (i == index)
		{
			if (index == 0)
			{
				tmp = copy;
				copy->next->prev = NULL;
				*head = copy->next;
				free(tmp);
				return (1);
			}
			tmp = copy;
			copy->prev->next = copy->next;
			copy->next->prev = copy->prev;
			free(tmp);
			return (1);
		}
		if (copy->next == NULL && i == index - 1)
		{
			tmp = copy;
			copy->prev->next = NULL;
			free(tmp);
			return (1);
		}
		copy = copy->next;
		i++;
	}
	return (-1);
}
