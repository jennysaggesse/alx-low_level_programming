#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - a function that returns a pointer to a 2 dimensional
  *array of integers
  *
  *@width: inner loops
  *
  *@height: outer loop
  *
  *Return: pointer array of integer
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridOut;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridOut = malloc(sizeof(int *) * height);
	if (gridOut == NULL)
	{
		free(gridOut);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridOut[i] = malloc(sizeof(int) * width);
		if (gridOut[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(gridOut[i]);
			}
			free(gridOut);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridOut[i][j] = 0;
		}
	}
	return (gridOut);
}
