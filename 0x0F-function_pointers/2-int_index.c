#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searchees for an integer
 * @array: pointers to array
 * @size: long of array
 * @cmp: function for compared values
 * Return: int first element com does return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int r;

	if (size <= 0)
		return (-1);
	
	while (i < size)
	{
		r = (*cmp)(array[i]);
		if (r == 1)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
