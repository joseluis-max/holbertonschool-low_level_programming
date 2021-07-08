#include "holberton.h"
/**
 * _puts_recursion - print with put and recursion
 * @s: pointer a strin
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
