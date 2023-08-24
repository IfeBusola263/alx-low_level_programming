#!/usr/bin/python3
'''
This module houses the function to calculate the perimeter of
an Island
'''


def island_perimeter(grid):
    '''
    Returns the perimeter of an island in form of a
    grid, which is a list of list of integers.
    '''

    if type(grid) is list:

        height = 0
        width = grid[0]
        for unit in grid:

            if type(unit) is list and 1 in unit:
                height += 1
                for i in range(len(unit)):
                    if unit[i] == 1:
                        width[i] = 1

        return (height + sum(width)) * 2
