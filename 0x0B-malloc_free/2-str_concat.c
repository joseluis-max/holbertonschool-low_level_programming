#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concat two string
 * @s1: first string
 * @s2: second string
 * Return: new string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	int j;
	int l;
	char *s;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[k] != '\0')
			k++;
	}

	s = malloc(sizeof(char) * (i + k + 1));

	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		s[j] = s1[j];
	}
	for (l = 0; l < k; l++)
	{
		s[l + j] = s2[l];
	}
	s[l + j + 1] = '\0';
	return (s);
}
