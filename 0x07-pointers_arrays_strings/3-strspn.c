#include "holberton.h"
/**
 * _strspn - length of a prefix substring
 * @s: string
 * @a: accept
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (*(accept + j))
	{
		while (*(s+ k))
		{
			if (accept[j] == s[k])
			{
				i++;
			}
			k++;
		}
		j++;
	}
	return (i);
}
