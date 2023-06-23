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
	char _line = 95;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		_putchar(_line);
		n++;
		_putchar('\n');
	}
}
