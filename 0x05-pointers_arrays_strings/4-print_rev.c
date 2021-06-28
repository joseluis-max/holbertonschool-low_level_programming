#include "holberton.h"
/**
 * print_rev - reverse a string
 * @s: string reverse
 */
void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	while (c > 0)
	{
		s--;
		_putchar(*s);
		c--;
	}
	_putchar('\n');
}
