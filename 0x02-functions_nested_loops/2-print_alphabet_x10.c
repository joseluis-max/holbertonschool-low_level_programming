#include "holberton.h"
/**
 * print_alphabet_x10 - alphabet x10 in lower case
 *
 * Return: 0
 */
int print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
