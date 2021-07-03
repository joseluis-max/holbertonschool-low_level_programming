#include "holberton.h"
/**
 * string_toupper - to uppercase
 * @str: pointer
 * Return: string in upper case
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
