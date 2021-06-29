#include "holberton.h"
/**
 * puts_half - half string;
 * @str: string for print
 */
void puts_half(char *str)
{
	int c = 0;
	int n = 0;

	while (*(str + c) != '\0')
	{
		c++;
	}
	while (*(str + c) != '\0')
	{
		if (n > (n - 1)/2)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
