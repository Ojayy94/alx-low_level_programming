#!/usr/bin/python3
"""Python interview function"""


def island_perimeter(grid):
    """A that returns the perimeter of the island described in grid.

       grid is a list of list of integers:
       0 represents a water zone
       1 represents a land zone
       One cell is a square with side length 1
       Grid cells are connected horizontally/vertically (not diagonally).
       Grid is rectangular, width and height don’t exceed 100
       Grid is completely surrounded by water, and there\
           is one island (or nothing).
       The island doesn’t have “lakes” (water inside\
               that isn’t connected to the water around the island).
    """
    width = len(grid[0])
    height = len(grid)
    size = 0
    fill = 0

    for water in range(height):
        for land in range(width):
            if grid[water][land] == 1:
                size += 1
                if (land > 0 and grid[water][land - 1] == 1):
                    fill += 1
                if (water > 0 and grid[water - 1][land] == 1):
                    fill += 1
    return (size * 4) - (fill * 2)
