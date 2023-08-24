#!/usr/bin/python3
"""
Contains a funciton that calculates perimeter
"""


def island_perimeter(grid):
    """
    `int`: Returns the perimeter of the island described in grid
    """
    if grid is None or len(grid) == 0:
        return 0
    perimeter = 0
    in_island = 0
    for i, row in enumerate(grid):
        row_cells = row.count(1)
        if not in_island and row_cells:
            in_island = 1
            perimeter += row_cells
            # print(perimeter)
        if row_cells:
            perimeter += 2
            # print("below +2", perimeter)
            curr_first = row.index(1)
            try:
                curr_last = row.index(0, curr_first) - 1
            except ValueError:
                curr_last = curr_first
            if grid[i + 1].count(1) == 0:

                perimeter += curr_last - curr_first + 1
                # print(i, "here",perimeter, "curlast", curr_last, "cur
                # first", curr_first)
            if grid[i - 1].count(1) != 0:
                prev_first = grid[i - 1].index(1)
                perimeter += abs(curr_first - prev_first)
                try:
                    prev_last = grid[i - 1].index(0, prev_first) - 1
                except ValueError:
                    prev_last = prev_first
                perimeter += abs(curr_last - prev_last)
                # print(i, "here",perimeter, "curlast", curr_last,
                # "cur first", curr_first, "prevfir", prev_first, "prevlas",
                # prev_last)

    return perimeter
