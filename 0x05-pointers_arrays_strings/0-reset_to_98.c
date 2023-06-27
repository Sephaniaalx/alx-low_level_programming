#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * reset_to_98 - function that takes a pointer to an int
 * @*n: pointer to a variable n
 * @n: takes the argument
 *
 * Return: nothing
 */

void reset_to_98(int *n)
{
	*n = 98;
}
