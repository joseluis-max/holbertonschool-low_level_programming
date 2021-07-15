#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free a grid 2D
 * @grid: 2D array
 * @height: rows number
 */
void free_grid( int **grid, int height)
{
	int row;
	int column;

	for (row = 0; row < height; row++)
	{
		column= 0;
		while (grid[row][column] != '\0')
		{
			free(grid[row][column]);
			column++;
		}
	}
	free(grid);
}
