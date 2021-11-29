#!/usr/bin/python3
"""Perimeter of the island described in grid
"""


def island_perimeter(grid):
    """Calculate perimeter island represented in an list
        Grid: list representation island
        Retunr: perimeter
    """
    if grid is None:
        return None
    h = 0
    w = 0
    for row in grid:
        try:
            if (row.index(1) >= 0):
                h = h + 1
        except ValueError:
            pass
    for row in grid:
        w = max(row.count(1), w)

    return (h * 2) + (w * 2)
