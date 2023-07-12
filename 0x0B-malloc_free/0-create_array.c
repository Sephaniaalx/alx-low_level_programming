#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - the main function for the array
 * @c: the character
 * @size: the size of the memory
 * Return: the return of NULL or 0
 */

char *create_array(unsigned int size, char c)
{
	char *point;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	point = malloc(sizeof(char) * size);

	if (point == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		point[i] = c;
	}
	return (point);
}
