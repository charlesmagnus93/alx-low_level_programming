#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - pointer to 2 dimensional array
 * @grid: columns
 * @height: rows
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
