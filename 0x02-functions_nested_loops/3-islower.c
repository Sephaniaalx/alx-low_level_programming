#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _islower - function prints the lower character
 *@c: the lower case character
 * Return: 1 if _islower is low  but 0 if not
 *
 */

int _islower(int c)
{

if (c > 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
