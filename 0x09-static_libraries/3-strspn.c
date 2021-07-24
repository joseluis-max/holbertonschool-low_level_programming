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

	while (s[j])
	{
		while (accept[k])
		{
			if (accept[k] == s[j])
			{
				i++;
			}
			k++;
		}
		j++;
	}
	return (i);
}
