#include "main.h"
#include <stdio.h>

/**
 * _memcpy - this function copies
 * @n: number of bytes
 * @dest: destination
 * @src: source where we are copying to
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
