#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strncpy - this is the function that copies the string to its destination
 * @dest: the destination
 * @src: the source
 * @n: the size of the destination
 * Return: returns destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
