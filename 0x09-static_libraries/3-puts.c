#include "holberton.h"
/**
 * _puts - print str
 * @str: string for print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
