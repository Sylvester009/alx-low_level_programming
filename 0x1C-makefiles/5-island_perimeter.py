#!/usr/bin/python3

"""
Island Perimeter Module
"""


def island_perimeter(grid):
    """
    function that returns the perimeter of the island
    described in grid

    Parameters:
    - grid: a list of list of integers
            0 represents a water zone.
            1 represents a land zone.

    Returns:
    - Perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
     
        # Check neighboring cells and minus 1 for each adj land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
