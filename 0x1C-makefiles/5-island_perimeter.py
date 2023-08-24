#!/usr/bin/python3
"""
Contains a funciton that calculates perimeter
"""


def island_perimeter(grid):
    """
    `int`: Returns the perimeter of the island described in grid
    """
    perimeter = 0
    in_island = 0
    for i, row in enumerate(grid):
        row_cells = row.count(1)
        if not in_island and row_cells:
            in_island = 1
            perimeter += row_cells
            print("first row", perimeter)
        if i == len(grid) - 1 or grid[i + 1].count(1) == 0:
            perimeter += row_cells + 2
            print("last row", perimeter)
            break
        if in_island:
            perimeter += 2
            print("for height + 2", perimeter)
            for j, num in enumerate(row):
                if grid[i + 1][j] + num == 1:
                    perimeter += 1
            print("for sum", perimeter)
    return perimeter
