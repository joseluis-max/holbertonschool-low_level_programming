#include "main.h"
#include <stddef.h>

/**
 * get_bit - return bit in index
 * @n:decimal number
 * @index: index where take the bit for return
 * Return: bit in index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
