#include "holberton.h"
/**
 * print_numbers - show numbers 1 to 9 with new end line
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 53)
		{}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
