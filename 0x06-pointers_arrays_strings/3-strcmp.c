#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * _strcmp - function that compares the string
 * @s1: first address being compared
 * @s2: second address being compared
 *
 * Return: returns 0 when same
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
