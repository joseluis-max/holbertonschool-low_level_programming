#include "holberton.h"
/**
 * _sqrt_recursion - natural square root
 * @n: number integer
 * Return: natural square root or -1
 */
int _check_integer(int i, int n)
{
	if (i * n != n)
	{
		i++;
	}
	return (i);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
	{
		_check_integer(0, n);
		return (_sqrt_recursion(n));
	}
}
