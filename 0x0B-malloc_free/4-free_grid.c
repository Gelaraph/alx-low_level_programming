#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - A function that frees a 2 dimensional grid previously created by your alloc_grid function.
 * @grid: 2 dim. array to free
 * @height: input height (size)
 * Return: freed 2 dimentional grid previously created.
 */


void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
