#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of int
 * @width: width input integer
 * @height: height input integer
 * Return: pointer to 2D array of int
 */
int **alloc_grid(int width, int height)
{
	int **arr_grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr_grid = (int **) malloc(height * sizeof(int));
	if (arr_grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr_grid[i] = (int *) malloc(width * sizeof(int));
		if (arr_grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr_grid[i]);
			free(arr_grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr_grid[i][j] = 0;
	}
	return (arr_grid);
}
