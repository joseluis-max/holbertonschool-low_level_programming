#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints in binary
 * @n:decimal number
 * Description: prints the binary representation of a number
 */

void print_binary(unsigned long int n)
{
	int start = 0;
	int i =  sizeof(n) * 8;

	for (i; i > 0; i--)
	{
		if ((n >> i) & 1)
		{
			start = 1;
		}
		if (start)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
