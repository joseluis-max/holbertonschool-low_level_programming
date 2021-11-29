#!/usr/bin/python3
"""Perimeter of the island described in grid
"""

def island_perimeter(grid):
    sum  = 0
    for row in grid:
        sum = sum + row.count(1)
    return (sum + 1) * 2