#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - copy a string give for parameter
 * @str: string to copy
 * Return: pointer to string copy
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;
	char *s;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] == '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
