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
		else if (str[i] == 'A')
			str[i] = '4';
		else if (str[i] == 'e')
			str[i] = '3';
		else if (str[i] == 'E')
			str[i] = '3';
		else if (str[i] == 'o')
			str[i] = '0';
		else if (str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't')
			str[i] = '7';
		else if (str[i] == 'T')
			str[i] = '7';
		else if (str[i] == 'l')
			str[i] = '1';
		else if (str[i] == 'L')
			str[i] = '1';
		i++;
	}
	return (str);
}
