#!/usr/bin/python3
"""
Defines the module 5-island_perimeter
"""


def island_perimeter(grid=[0]):
    """
    Defines the function island_perimeter

    Description:
    grid is a list of list of integers
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally)
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island or nothing
    The island doesn’t have “lakes” (water inside that isn’t connected to the
    water around the island).

    Args:
    Takes in one argument that is a list of integers which are 0 or 1
    If the the argument is not a list an error occurs
    If an integer in the list is not 0 or 1 and error occurs

    Returns:
    The perimeter of the island
    """
    perimeter = 0
    connected_to = 0
    block_perimeter = 4
    rows = len(grid)
    cols = len(grid[0])

    if isinstance(grid, list):
        pass
    else:
        print("Usage: island_perimeter([0,1,0,1,0])")

    for i in range(rows):
        for j in range(cols):
            if i > 100 or j > 100:
                return perimeter
            if grid[i][j] == 1:
                if grid[i - 1][j]:
                    connected_to += 1
                if grid[i + 1][j]:
                    connected_to += 1
                if grid[i][j - 1]:
                    connected_to += 1
                if grid[i][j + 1]:
                    connected_to += 1
                block_perimeter -= connected_to
                if block_perimeter < 0:
                    block_perimeter = 0
                perimeter += block_perimeter
                connected_to = 0
                block_perimeter = 4

            if grid[i][j] not in [0, 1]:
                print("Must use the interger values of 0 and 1")

    return perimeter
