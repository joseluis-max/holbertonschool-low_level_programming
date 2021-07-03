#include "holberton.h"
/**
 * _strncpy - copy string with n letter src
 * @dest: string for add
 * @src: string where add
 * @n: letter from src to copy
 * Return: dest pointer new string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
