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

	array = malloc(sizeof(int *) * height);
	for (row = 0; row < height; row++)
	{
		array[row] = malloc(sizeof(int) * width);
		for (column = 0; column < width; column++)
		{
			array[row][column] = 0;
		}
	}
	return (array);
}
