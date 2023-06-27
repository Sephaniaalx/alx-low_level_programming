#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * swap_int - swaps 2 integers
 * @a: first variable
 * @b: second variable
 * @temp: representing a temporary variable
 *
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
