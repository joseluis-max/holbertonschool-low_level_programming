#include "lists.h"
/**
 * sum_dlistint - suma double list
 * @head: double list
 * Return: sum of all the data in head list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
