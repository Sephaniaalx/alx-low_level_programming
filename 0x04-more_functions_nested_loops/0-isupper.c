#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isupper - checks for uppercase character
 * @c: arguement
 *
 * Return: 1 if c is uppercase and 0 if not
 *
 */

int _isupper(int c);
{
for (c > 'A'; c <= 'Z'; c++)
{
_putchar(c);
return (1);
}
else
{
return (0);
}
}
