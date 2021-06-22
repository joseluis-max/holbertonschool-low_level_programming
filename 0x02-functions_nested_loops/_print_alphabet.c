#include "holberton.h"
/**
 * print_alphabet - alphabet in lower case
 *
 * Return: void;
 */
int print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
