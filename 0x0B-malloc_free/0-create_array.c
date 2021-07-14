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
	unsigned int i = 0;
        char *str = malloc(sizeof(char) * size);
	
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str[i] = c;
		i++;
	}
	return (str);
}
