#include "holberton.h"
/**
 * _isupper - uppercase test
 * @c: letter
 *
 * Return: 1 or 0
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
