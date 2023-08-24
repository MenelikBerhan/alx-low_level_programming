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
        if in_island and (i == len(grid) - 1 or grid[i + 1].count(1) == 0):
            perimeter += row_cells + 2
            break
        if in_island:
            for j, num in enumerate(row):
                if j == row.index(1) or (num == 1 and j == len(row) - 1):
                    perimeter += 1
                if j >= row.index(1) and j < len(row) - 1:
                    if num + row[j + 1] == 1:
                        perimeter += 1
                if grid[i + 1][j] + num == 1:
                    perimeter += 1
    return perimeter
