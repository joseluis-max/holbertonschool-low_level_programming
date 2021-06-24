#include "holberton.h"
/**
 * print_numbers - show numbers 1 to 9 with new end line
 *
 * Return: void
 */
void print_numbers(void)
{
	char i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
