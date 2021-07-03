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
	int i = 0;
	int j = 0;

	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
