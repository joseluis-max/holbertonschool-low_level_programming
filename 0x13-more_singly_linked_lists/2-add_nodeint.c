#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at the beginning of a list
 * @head: double pointer two head;
 * @n: new int two add
 * Return: address of a new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
