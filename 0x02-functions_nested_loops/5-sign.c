#include "holberton.h"
/**
 * print_sign - sign of number
 *
 * @n: number for return the sign
 *
 * Return: 1 , 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
