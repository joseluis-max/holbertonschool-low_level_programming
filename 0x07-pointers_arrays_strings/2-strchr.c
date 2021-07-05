#include "holberton.h"
/**
 * * _strchr - locate character in string
 * @s: string
 * @c: character
 * Return: first occurrence or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return ('NULL');
}
