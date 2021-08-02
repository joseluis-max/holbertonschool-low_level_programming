#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t
 * @h: struct listint_t
 * Return: node's number
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
