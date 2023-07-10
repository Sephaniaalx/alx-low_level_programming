#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _strspn - function that gets the length
 * @s: the string
 * @accept: this is the comparison word
 *
 * Return: it returns count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (count);
}
