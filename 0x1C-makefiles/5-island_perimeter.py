#! /usr/bin/python3
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
        if row_cells:
            perimeter += 2
            first_1 = row.index(1)
            try:
                next_0 = row.index(0, first_1)
            except ValueError:
                next_0 = first_1 + 1

            try:
                next_1 = row.index(1, next_0)
            except ValueError:
                next_1 = -1
            if next_1 != -1:
                try:
                    last_1 = row.index(1, next_1 + 1)
                except ValueError:
                    last_1 = next_1
            else:
                last_1 = -1
            perimeter += next_0 - first_1
            perimeter += last_1 - next_1
    return perimeter
