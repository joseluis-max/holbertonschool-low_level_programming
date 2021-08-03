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
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL || *head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	tmp = *head;
	while (count < idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		count++;
	}
	copy = tmp->next;
	tmp->next = new_node;
	new_node->next = copy;
	return (new_node);

}
