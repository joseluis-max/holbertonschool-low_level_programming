#include "holberton.h"
/**
 * print_square - square of #
 * @size: size of square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 0;

		while (j < size)
		{
			int i = 0;

			while (i < size)
			{
				_putchar(35);
				i++;
			}
			_putchar('\n');
			j++;
		}
	}

}
