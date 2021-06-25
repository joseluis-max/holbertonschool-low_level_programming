#include "holberton.h"
/**
 * print_line - print line with n long
 * @n: integer number
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
	_putchar('\n');
	}
}
