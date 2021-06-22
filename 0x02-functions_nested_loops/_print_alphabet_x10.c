#include "holberton.h"
/**
 * print_alphabet_x10 - alphabet x10 in lower case
 *
 * Return: 0
 */
int print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	return (0);
}
