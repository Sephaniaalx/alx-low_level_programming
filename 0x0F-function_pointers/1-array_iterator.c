#include "function_pointers.h"

/**
 * array_iterator - the main function
 * @array: An array
 * @size: The size of the array
 * @action: The function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
