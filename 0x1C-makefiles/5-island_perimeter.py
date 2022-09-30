#!/usr/bin/python3
'''Interview prep challenge. Checking for
'''


def island_perimeter(grid):
    '''Checks the perimeter of an island represented by
    an array containing an array of numbers
    '''
    perimeter = 0
    for outer_index, outer_item in enumerate(grid):
        for inner_index, inner_item in enumerate(outer_item):
            if inner_item == 1:
                perimeter += (vertical_borders(outer_item, inner_index) +
                              horizontal_borders(grid, outer_index,
                                                 inner_index))
    return perimeter


def vertical_borders(query_list, index):
    '''Checks vertically around a cell for borders
    '''
    vertical_perimeter = 0
    if index == 0 or query_list[index - 1] == 0:
        vertical_perimeter += 1
    if index >= len(query_list) - 1 or query_list[index + 1] == 0:
        vertical_perimeter += 1
    return vertical_perimeter


def horizontal_borders(grid,  outer_index, inner_index):
    '''checks horizontally around a cell for borders
    '''
    horizontal_perimeter = 0
    if outer_index == 0 or grid[outer_index - 1][inner_index] == 0:
        horizontal_perimeter += 1
    if outer_index >= len(grid) - 1 or grid[outer_index + 1][inner_index] == 0:
        horizontal_perimeter += 1
    return horizontal_perimeter
