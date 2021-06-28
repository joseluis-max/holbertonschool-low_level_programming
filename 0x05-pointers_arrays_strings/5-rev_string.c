#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string reverse
 */
void rev_string(char *s)
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
