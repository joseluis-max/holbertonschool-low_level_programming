#include "holberton.h"
/**
 * is_prime_number - prime number
 * @n: int number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	if (n == 1)
	{
		return (0);
	}
	if (n % 2 != 0)
	{
		return (1);
	}
	return (0);
}
