#include "holberton.h"
/**
 * print_numbers - show numbers 1 to 9 with new end line
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
