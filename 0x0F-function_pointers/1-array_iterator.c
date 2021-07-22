#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - parameter in functions on each element of array
 * @array: pointer two array
 * @size: size's array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
