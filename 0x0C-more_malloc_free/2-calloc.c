#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmeb: numbers of members
 * @size: size of the array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmeb == 0 || size == 0)
		return (NULL);
	arr = malloc(size + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmeb; i++)
	{
		arr[i] = 0;
	}
	arr[i] = '\0';
	return (arr);
}
