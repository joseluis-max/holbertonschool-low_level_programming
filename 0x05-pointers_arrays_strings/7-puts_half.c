#include "holberton.h"
/**
 * puts_half(char *str);
 * @str: string for print
 */
void puts_half(char *str)
{
	int l = _strlen(str);
	int n = l - 1 / 2;
	int i = n;

	while (i > l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
