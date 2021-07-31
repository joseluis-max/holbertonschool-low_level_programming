#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - print elements of a linked list
 * @h: linked list pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	char *str;
	unsigned int len;

	while (h)
	{
		str = h->str;
		len = h->len;
		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}
		printf("[%u] %s\n", len, str);
		h = h->next;
		count++;
	}
	return (count);
}
