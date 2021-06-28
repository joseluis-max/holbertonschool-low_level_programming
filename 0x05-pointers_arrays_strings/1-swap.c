#include "holberton.h"
/**
 * swap_int - inter change values
 * @a: int pointer
 * @b: int ponter
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
