#include "main.h"
#include <stdlib.h>

/**
 * allocate_memory - allocate memory for a 2D grid
 * @width: width of the grid
 * @height: height of the grid
 * @u: pointer to the grid
 * Return: 1 on success, 0 on failure
 */
int allocate_memory(int width, int height, int ***u)
{
	int i = 0;

	*u = malloc(sizeof(int *) * height);
	if (*u == NULL)
		return (0);

	while (i < height)
	{
		(*u)[i] = malloc(sizeof(int) * width);
		if ((*u)[i] == NULL)
		{
			while (i > 0)
				free((*u)[--i]);
			free(*u);
			return (0);
		}
		i++;
	}

	return (1);
}

/**
 * initialize_grid - initialize a 2D grid with zeros
 * @width: width of the grid
 * @height: height of the grid
 * @u: pointer to the grid
 */
void initialize_grid(int width, int height, int **u)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			u[i][j] = 0;
	}
}

/**
 * alloc_grid - allocate memory for a 2D grid and initialize with zeros
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the allocated and initialized grid or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **u;

	if (width <= 0 || height <= 0)
		return (NULL);

	if (!allocate_memory(width, height, &u))
		return (NULL);

	initialize_grid(width, height, u);

	return (u);
}
