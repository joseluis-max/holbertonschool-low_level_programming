#include "holberton.h"
/**
 * puts2 - print every other character
 * @str: string for print
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
