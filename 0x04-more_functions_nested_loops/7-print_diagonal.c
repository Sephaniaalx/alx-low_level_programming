#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_diagonal - function
 *
 * @n: number of times.
 *
 * Return: an int
 */
void print_diagonal(int n)
{
	int i;

	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(47);
		{
			_putchar('\n');
		}
	}
}
