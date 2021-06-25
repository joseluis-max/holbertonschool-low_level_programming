#include "holberton.h"
/**
 * print_triangle - triangle with #
 * @size: integer for size of triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = size - i;
			int k = 0;

			while (j > 0)
			{
				_putchar(32);
				j--;
			}
			while (k < i + 1)
			{
				_putchar(35);
				k++;
			}
			i++;
			_putchar('\n');
		}
	}
}
