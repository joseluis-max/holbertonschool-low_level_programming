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
	char **array;

	array = malloc(sizeof(int *) * heigth);
	for (row = 0; row < height; row++)
	{
		array[row] = malloc(sizeof( ) * width);
		for (column = 0; column < width; column++)
		{
			array[row][column] = 0;
		}
	}
	return (array);
}
