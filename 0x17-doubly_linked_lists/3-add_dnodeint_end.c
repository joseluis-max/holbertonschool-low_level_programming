#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node in end dlinke lists
 * @head: pointer to head
 * @n: new node value
 * Return: address new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy;
	dlistint_t *node;

	copy = *head;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	while (copy && copy->next)
	{
		copy = copy->next;
	}
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		copy->next = node;
		node->prev = copy;
	}
	return (*head);
}
