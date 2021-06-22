#include "holberton.h"
/**
 * print_alphabet_x10 - alphabet x10 in lower case
 *
 * Return: 0
 */
int print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
	return (0);
}
