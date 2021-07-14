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

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return ('\0');
	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0')
		k++;

	s = malloc(sizeof(char) * (i + k + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = s1[j];
	}
	j = 0;
	for (l = i; l < k; l++)
		s[l] = s2[j];
		j++;
	s[l] = '\0';
	return (s);
}
