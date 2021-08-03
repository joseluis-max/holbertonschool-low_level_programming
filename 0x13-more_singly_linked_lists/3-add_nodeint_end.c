#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the beginning of a list
 * @head: double pointer two head;
 * n: new int two add
 * Return: address of a new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *h;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	node->n = n;
	node->next = NULL;
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = node;
	return (node);
}
