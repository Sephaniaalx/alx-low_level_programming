#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - the function that returns the value
 * @x: base number
 * @y: exponent number
 *
 * Return: -1 if its lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
