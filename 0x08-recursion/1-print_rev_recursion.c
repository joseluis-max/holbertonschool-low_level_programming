#include "holberton.h"
/**
 * _print_rev_recursion - rev recursion print
 * @s: pointer string
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	if (*(s + i) == '\n')
	{
		_putchar('\n');
		return;
	}
	putchar(s[i]);
	s++;
	_print_rev_recursion(s);
}
