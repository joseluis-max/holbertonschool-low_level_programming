#include "holberton.h"
/**
 * _memset - change memory
 * @s: pointer string
 * @b: new value
 * @n: numbers of byt to replace
 * Return: pointer to the memory are s
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n > 0)
	{
		s[n] = b;
		n--;
	}
	return (s);
}
