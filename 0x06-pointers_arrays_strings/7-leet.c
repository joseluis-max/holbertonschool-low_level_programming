#include "holberton.h"
/**
 * leet - encode string
 * @str: string for encode
 * Return: string encoded
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == 'a')
			str[i] = '4';
		if (str[i] == 'A')
			str[i] = '4';
		if (str[i] == 'e')
			str[i] = '3';
		if (str[i] == 'E')
			str[i] = '3';
		if (str[i] == 'o')
			str[i] = '0';
		if (str[i] == 'O')
			str[i] = '0';
		if (str[i] == 't')
			str[i] = '7';
		if (str[i] == 'T')
			str[i] = '7';
		if (str[i] == 'l')
			str[i] = '1';
		if (str[i] == 'L')
			str[i] = '1';
	}
	return (str);
}
