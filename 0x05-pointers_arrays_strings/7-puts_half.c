#include "holberton.h"
/**
 * puts_half(char *str);
 * @str: string for print
 */
void puts_half(char *str)
{
	int c = 0;
	int n;

	while (*(str + c) != '\0')
	{
		c++;
	}

	n = (c - 1) / 2;
	while (n > c)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
