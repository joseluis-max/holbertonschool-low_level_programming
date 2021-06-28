#include "holberton.h"
/**
 * puts2 - print every other character
 * @str: string for print
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
