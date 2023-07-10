#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * *_strncat - function to cocantenate 2 strings
 * @dest: destination after concatenatiom
 * @src: source
 * @n: the number of characters you want to print
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
