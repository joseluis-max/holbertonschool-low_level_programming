#include "holberton.h"
/**
 * factorial - factorial of int
 * @n: integer number
 * Return: n < 0 -> -1, factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
