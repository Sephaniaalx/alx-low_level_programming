#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the memory
 * @s: the pointer
 * @n: number of bytes to be filled
 * @b: the constant used to fill the bytes
 *
 * Return: returns a pointer to the memry
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
