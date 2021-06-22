#include "holberton.h"
/**
 * print_last_digit - last digit of integer
 *
 * @n: integer
 *
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int val = n % 10;

	if (val < 0)
	{
		val = val * -1;
	}
	_putchar(val + 48);
	return (val);
}
