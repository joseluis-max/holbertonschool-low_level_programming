#include "holberton.h"
/**
 * _memcpy - copy n bytes of memory to dest
 * @dest: destination memory
 * @src: string for copy
 * @n: numbers of bytes
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
