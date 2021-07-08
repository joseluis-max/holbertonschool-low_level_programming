#include "holberton.h"
/** 
 * _strlen_recursion - count long of string with recursion
 * @s: pointer to string
 * Return: large of the string in integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
