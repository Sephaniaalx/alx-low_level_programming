#include "main.h"

/**
 * _calloc - main function
 * @nmemb: number of element
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
