#include "lists.h"
#include <stddef.h>
/**
 * list_len - length of h
 * @h: linked list
 * Return: length of h
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
