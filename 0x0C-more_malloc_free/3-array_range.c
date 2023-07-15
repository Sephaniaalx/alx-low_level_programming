#include "main.h"

/**
 * array_range - main function
 * @min: first value
 * @max: last value
 *
 * Description: of the array that is created
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *ptr = NULL;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
