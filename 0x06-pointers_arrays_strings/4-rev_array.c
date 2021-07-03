#include "holberton.h"
/**
 * reverse_array - reverse array
 * @a: array of integers
 * @n: long of a
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp[12];

	while (i < n)
	{
		tmp[i] = a[i];
		i++;
	}
	i = 0;
	while (n > 0)
	{
		a[n - 1] = tmp[i];
		n--;
		i++;
	}
}
