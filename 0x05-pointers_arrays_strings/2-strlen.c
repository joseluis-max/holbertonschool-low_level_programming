#include "holberton.h"
/**
 * _strlen - length of a string
 * @s: pointer of str var
 *
 * Return: long of string in intergers
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
