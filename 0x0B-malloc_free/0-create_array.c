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
	char *str = malloc(sizeof(char) * size);
	*str[0] = c;
	return (str);
}
