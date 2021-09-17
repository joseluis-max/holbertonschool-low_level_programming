#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add node in double linked list
 * @head: pointer to double linked list
 * @n: new node value
 * Return: Addres of the new element, of NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	return (*head);
}
