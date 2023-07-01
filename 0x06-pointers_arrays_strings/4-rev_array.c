#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * reverse_array - function that reverses the array
 * @a: array to be reversed
 * @n: number of elements
 *
 * return: zero
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
