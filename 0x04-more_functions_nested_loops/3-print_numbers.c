#include "holberton.h"
/**
 * print_numbers - show numbers 1 to 9 with new end line
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
