#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isdigit - this checks for digits
 *
 * @c: takes in the argument
 *
 * Return: 1 if digit and 0 if otherwise
 */
int _isdigit(int c)
{
if (c > 1 && c < 10)
{
return (1);
}
else
{
return (0);
}
}
