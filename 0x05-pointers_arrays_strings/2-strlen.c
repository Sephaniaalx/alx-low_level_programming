#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - representing the string length
 * @s: address of pointer
 *
 * Return: nothing
 */
int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
