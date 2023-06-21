#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isalpha - the function that checks for alphabetic characters
 * @c: the character
 *
 * Return: returns 1 if c is lower or upper but 0 if not
 */

int _isalpha(int c)
{
if (c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
