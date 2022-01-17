#include "search_algos.h"

/**
 * linear_search - search for a value in array
 * @array: list of integers for search value
 * @value: element for found in array
 * @size: length of list of integers (array)
 * Return: first index where value is founded
 * or -1 if not is present or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
