#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - create an array of integers
 * @min: start
 * @max: end
 * Return: pointer new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int n = min;
	int size = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = n;
		n++;
	}
	return (arr);
}
