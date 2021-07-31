#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node_end - create a new node in end of linked list
 * @head: first element of linked list
 * @str: string need to be duplicated
 * Return: the address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	list_t *node;
	list_t *h;

	h = *head;
	node = malloc(sizeof(list_t));
	if (node == NULL || str == NULL)
		return (NULL);
	while (str[i])
		i++;
	node->str = malloc(sizeof(char) * i);
	while (j < i)
	{
		node->str[j] = str[j];
		j++;
	}
	node->len = i;
	node->next = NULL;
	if (h == NULL)
	{
		*head = node;
		return (node);
	}
	while (h->next)
		h = h->next;
	h->next = node;
	return (node);
}
