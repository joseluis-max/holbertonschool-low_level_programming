#include "holberton.h"
/**
 * create_array - create an array with specific strin
 * @size: lenght of array
 * @c: string
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);
	*str[0] = c;
	return (str);
}
