#include "lists.h"
/**
 * print_dlistint - print a list
 * @h: double linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
