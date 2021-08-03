#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node
 * @head: pointer to struct listint_t
 * @idx: index
 * @n: new num
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node, *copy;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	tmp = *head;
	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}
	copy = tmp->next;
	tmp->next = new_node;
	new_node->next = copy;
	return (new_node);

}
