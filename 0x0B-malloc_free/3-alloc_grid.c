#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: u (success) NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **u;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	u = malloc(sizeof(int *) * height);

	if (u == NULL)
		return (NULL);

	while (i < height)
	{
		u[i] = malloc(sizeof(int) * width);

		if (u[i] == NULL)
		{
			while (i >= 0)
			{
				free(u[i]);
				i--;
			}

			free(u);
			return (NULL);
		}

		i++;
	}

	i = 0;

	while (i < height)
	{
		j = 0;

		while (j < width)
		{
			u[i][j] = 0;
			j++;
		}

		i++;
	}

	return (u);
}
