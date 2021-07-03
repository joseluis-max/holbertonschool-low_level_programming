#include "holberton.h"
/**
 * _strncat - concat string with n letter src
 * @dest: string for add
 * @src: string where add
 * @n: letter from src to concat
 * Return: dest pointer new string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}
