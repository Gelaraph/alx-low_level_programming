#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: NULL on failure and if width or height is 0 or negative, return NULL
 */


int **alloc_grid(int width, int height)
{
	int **array;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			array[i][n] = 0;
		}
	}
	return (array);
}
