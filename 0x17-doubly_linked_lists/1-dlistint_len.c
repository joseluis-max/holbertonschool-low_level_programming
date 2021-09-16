#include "lists.h"
/**
 * dlistint - to get a len of dlistint
 * @h: header double linked lists
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
