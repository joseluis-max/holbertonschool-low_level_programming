#include "holberton.h"
/**
 * _islower - verificate if is lower
 *
 * @c: character in ASCII
 *
 * Return: 1 true 0 false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
