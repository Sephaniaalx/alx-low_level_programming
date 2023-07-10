#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: Direction
 * @b: character which is contant
 * @n: The number of bytes to be filled.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
