#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_square - prints the square of a figure
 *@size: print_size
 * Return: an integer
 */

void print_square(int size)
{

int i;
int k;

if (size > 0)
{
for (i = 0; i < size; i++)
{

for (k = 0; k < size; k++)
{
_putchar (35);
}
_putchar ('\n');

}

}

else
{
_putchar ('\n');
}
}
