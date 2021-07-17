#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - ckecked allocation
 * @b: size of allocation
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *b;
	
	b = malloc(b);
	if (b == NULL)
	{
		exit(98);
	}
	return (b);
}
