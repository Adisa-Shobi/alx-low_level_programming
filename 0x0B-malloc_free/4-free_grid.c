#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees the allocated memory of a 2 dimensional array
 *@grid: Two dimensional array memory space
 *@height: The height of the grid
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
