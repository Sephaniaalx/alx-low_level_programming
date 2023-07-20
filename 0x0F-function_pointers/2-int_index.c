#include "function_pointers.h"

/**
 * int_index - main function
 * @array: the array
 * @size: the size
 * @cmp: a pointer to the function used to compare values
 *
 * Return: 0; returns -1 if no elment matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
