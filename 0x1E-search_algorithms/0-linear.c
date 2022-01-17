#include "search_algos.h"
#include <aio.h>
#include <stdlib.h>

/**
 * linear_search - search for a value in array
 * @array: list of integers for search value
 * @value: element for found in array
 * @size: length of list of integers (array)
 * Return: first index where value is founded
 * or NULL if not is present
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Found %d at index: %d", value, i);
			return (i);
		}
		printf("Value checked array[%d] = [%d]", i, array[i]);
	}
}
