#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node - create a new node in linked list
 * @head: first element of linked list
 * @str: string need to be duplicated
 * Return: the address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL || str == NULL)
	{	free(node);
		return (NULL);
	}
	while (str[i])
		i++;
	node->str = malloc(sizeof(char) * i);
	if (node->str == NULL)
	{
		free(node->str);
		free(node);
		return (NULL);
	}
	while (j < i)
	{
		node->str[j] = str[j];
		j++;
	}
	node->len = i;
	node->next = NULL;
	if (*head != NULL)
		node->next = *head;
	*head = node;
	return (node);
}
