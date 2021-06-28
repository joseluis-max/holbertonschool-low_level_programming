#include "holberton.h"
/**
 * print_rev - reverse a string
 * @s: string reverse
 */
void print_rev(char *s)
{
	int l = _strlen(s);
	
	while (l > 0)
	{
		s--;
		_putchar(*s);
		l--;
	}
	_putchar('\n');
}
