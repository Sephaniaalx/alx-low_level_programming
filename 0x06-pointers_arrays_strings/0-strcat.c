#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenate 2 strings
 *
 * Return: returns the pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i;
	
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		j++;
		i++
	}
	dest[i] = '\0';

	return (dest);
}
