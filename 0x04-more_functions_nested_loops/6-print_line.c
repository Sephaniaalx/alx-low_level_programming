#include "main.h"
#include <stdio.h>
#include <stdio.h>

/**
 * print_line - function to print a line
 * @n: is the number of times to print line
 *
 * Return: return an integer
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
