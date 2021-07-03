#include "holberton.h"
/**
 * _strcat - concat two strings
 * @dest: string for add
 * @src: string where add
 * Return: dest pointer new string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}
