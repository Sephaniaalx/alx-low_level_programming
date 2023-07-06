#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns factorial of a given number
 * @n: the integer passed
 *
 * Return: -1 if lower than 0 and -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
