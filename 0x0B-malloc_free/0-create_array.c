#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array with specific strin
 * @size: lenght of array
 * @c: string
 * Return: pointer to string
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *str = malloc(sizeof(char) * size);

	while (str)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
