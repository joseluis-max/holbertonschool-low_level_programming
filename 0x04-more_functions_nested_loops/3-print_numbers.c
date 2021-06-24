#include "holberton.h"
/**
 * print_numbers - show numbers 1 to 9 with new end line
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
