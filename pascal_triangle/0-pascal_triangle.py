#!/usr/bin/python3
"""Pascal's Triangle"""


def pascal_triangle(n):
    """that returns a list of lists of integers
        representing the Pascal’s triangle of n"""
    if n <= 0:
        return []
    pascal = [[1]]
    for _ in range(n - 1):
        pascal += [[1] + [pascal[-1][i] + pascal[-1][i + 1]
                        for i in range(len(pascal[-1]) - 1)] + [1]]
    return pascal
