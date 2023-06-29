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
	strcat(dest,src);
	printf("%s", dest);
	return (0);
}
