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

    Retunr: perimeter
    """
    h = 0
    w = 0
    for row in grid:
        try:
            if (row.index(1) >= 0):
                h = h + 1
        except:
            pass
    for row in grid:
        w = max(row.count(1), w)
    
    return (h * 2) + (w * 2)
