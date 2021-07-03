#include "holberton.h"
/**
 * cap_string - Capitalizes
 * @str: pointer
 * Return: string capitalizes
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			switch (str[i - 1])
			{
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case ' ':
				case '\n':
				case '\t':
					str[i] = str[i] - 32;
			}
		}
		i++;
	}

	return (str);
}
