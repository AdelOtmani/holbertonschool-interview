#!/usr/bin/python3
"""
island perimeter module
"""


def island_perimeter(grid):
    """
    grid is a list of list of integers:
            0 represents water
            1 represents land
            Each cell is square, with a side length of 1
            Cells are connected horizontally/vertically (not diagonally).
            grid is rectangular, with its width and height not exceeding 100
    Returns the perimeter of the island described in grid
    """
    if not grid:
        return(0)
    count = 0
    height = len(grid)
    lenght = len(grid[0])

    for i in range(0, height):
        for j in range(0, lenght):
            """if the current cell is land"""
            if grid[i][j] == 1:
                """checks if the top edge is adjacent to water"""
                if i == 0 or grid[i - 1][j] == 0:
                    count = count + 1
                """checks if the bottom edge is adjacent to water"""
                if i == height - 1 or grid[i + 1][j] == 0:
                    count = count + 1
                """checks if left edge is adjacent to water"""
                if j == 0 or grid[i][j - 1] == 0:
                    count = count + 1
                """checks if the right edge is adjacent to the water"""
                if j == lenght - 1 or grid[i][j + 1] == 0:
                    count = count + 1
    return count
