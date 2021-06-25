#include "holberton.h"
/**
 * print-diagonal - diagonal print
 * @n: inter number
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 0;

		while (j < n)
		{
			int i = 0;

			while (i <= (j + 1))
			{
				_putchar(32);
				i++;
			}
			_putchar(92);
			_putchar('\n');
			j++;
		}
	}
}
