#include "holberton.h"
/** _strlen_recursion - count long of string with recursion
 * @s: pointer to string
 * Return: large of the string in integer.
 */

int i = 0;

int _strlen_recursion(char *s)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	i++
	_strlen_recursion(s);
}
