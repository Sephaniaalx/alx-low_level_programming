#include "main.h"

/**
 * malloc_checked - main function
 * @b: size
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr = NULL;

	if (b != 0)
	{
		ptr = malloc(b);
	}
	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
