#include "holberton.h"
/**
 * _abs - absolute value
 * 
 * @n: number integer
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if(n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
