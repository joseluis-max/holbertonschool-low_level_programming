#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head
 * @idx: index
 * @n: new value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy;
	dlistint_t *node;
	unsigned int i = 0;

	if (!h || (idx > 0 && *h == NULL))
		return (NULL);
	copy = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0 || copy == NULL)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	while (copy)
	{
		if (i == idx - 1)
		{
			node->prev = copy;
			node->next = copy->next;
			copy->next = node;
			copy->next->prev = node;
			return (*h);
		}
		if (copy->next == NULL && i == idx - 1)
		{
			add_dnodeint_end(h, n);
			return (*h);
		}
		copy = copy->next;
		i++;
	}
	return (NULL);
}
