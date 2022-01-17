#include "search_algos.h"
#include <math.h>
/**
 * binary_search - searchs for a value in a sorted array of integers
 * @array: sorted list of integers
 * @size: unsigned int length list
 * @value: integer for found in list
 * Return: return index on founded element or -1
 * if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int middle = 0;
	int left = 0;
	int rigth = size - 1;
	int i = 0;

	if (array == NULL)
		return (-1);

	while (left <= rigth)
	{
		printf("Searching in array: ");
		for (i = left; i <= rigth; i++)
		{
			if (i == rigth)
				printf("%d\n", array[i]);
			else
			{
				printf("%d, ", array[i]);
			}
		}
		middle = ceil((left + rigth) / 2);
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			rigth = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
