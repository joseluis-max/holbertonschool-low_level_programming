#!/usr/bin/python3
"""Perimeter of the island described in grid
"""

def island_perimeter(grid):
    """Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """
    sum  = 0
    for row in grid:
        sum = sum + row.count(1)
    if sum == 0:
        return 0;
    return (sum + 1) * 2