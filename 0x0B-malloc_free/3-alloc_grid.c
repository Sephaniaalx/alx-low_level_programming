#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array integers
 * @height: no of elements
 * @width: no of subelements
 *
 * Return: double pointer to the array, else, NULL
 */
int **alloc_grid(int width, int height)
{
	int **point = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	point = malloc(sizeof(int *) * height);
	if (!point)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		point[i] = malloc(sizeof(int) * width);
		if (!point[i])
		{
			for (j = 0; j < i; j++)
			{
				free(point[j]);
			}
			free(point);
		}
		for (j = 0; j < width; j++)
		{
			point[i][j] = 0;
		}
	}
	return (point);
}
