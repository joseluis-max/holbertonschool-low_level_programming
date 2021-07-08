#include "holberton.h"
/**
 * _por_recursion - por with recursion
 * @x: raised
 * @y: power
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x , y - 1));
}
