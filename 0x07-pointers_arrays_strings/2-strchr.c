#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character
 * @c: the character
 * @s: the location
 * Return: value of character
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i]; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
