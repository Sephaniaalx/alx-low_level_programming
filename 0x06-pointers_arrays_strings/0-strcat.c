#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenate 2 strings
 * @dest: a pointer to a character
 * @src: what will be changed
 *
 * Return: returns the pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
