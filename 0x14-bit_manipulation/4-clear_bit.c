#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to decimal number
 * @index: index for make the change
 * Return: 1 ok, -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
