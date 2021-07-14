#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - create an array with specific strin
 * @size: lenght of array
 * @c: string
 * Return: pointer to string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(c) * size);
	if (size != || str != NULL)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
	return (NULL);
}
