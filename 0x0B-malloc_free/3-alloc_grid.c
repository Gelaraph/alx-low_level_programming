#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional array of 
 * integers.
 * @width: width input
 * @height: height input
 * Return: NULL on failure and if width or height is 0 or negative, return NULL
 */


int **alloc_grid(int width, int height)
{
	int i, j, m, n;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}
	return (grid);
}
