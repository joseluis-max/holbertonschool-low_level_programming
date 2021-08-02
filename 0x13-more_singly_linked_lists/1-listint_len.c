#include "lists.h"
/**
 * listint_len - number of element in a linked
 * @h: pointer to head
 * Return: size of linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h != NULL)
	{
		while (h)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
