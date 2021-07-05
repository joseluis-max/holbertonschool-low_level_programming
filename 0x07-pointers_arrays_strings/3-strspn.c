#include "holberton.h"
/**
 * _strspn - length of a prefix substring
 * @s: string
 * @accept: accept
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;
	int k = 0;

	while (*(accept + j))
	{
		while (*(s + k))
		{
			if (accept[j] == s[k])
			{
				i++;
			}
			if (accept([j])
			{
				return (i);
			}
			k++;
		}
		j++;
	}
	return (i);
}
