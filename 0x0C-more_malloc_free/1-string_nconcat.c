#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concat two strings
 * @s1: string
 * @s2: string 
 * @n: number
 * Return: pointer new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;
	char *str;

	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	if (j <= n)
		n = j;
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (k = 0; k < n; k++)
	{
		str[k + i] = s2[k];
	}
	str[k + i] = '\0';
	return (str);
}
