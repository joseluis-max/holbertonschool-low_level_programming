#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - concat two string
 * @width: colums
 * @height: rows
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int row;
	int column;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		array[row] = malloc(sizeof(int) * width);
		if (array[row] == NULL)
		{
			return (NULL);
		}
		for (column = 0; column < width; column++)
		{
			array[row][column] = 0;
		}
	}
	free(array);
	return (array);
}
