#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _abs - function that prints absolute value
 *
 * Return: 0
 *
 */

int _abs(int)
{
int number;
if (number < 0)
{
return (-number);
}
else
{
return (number);
}
}
