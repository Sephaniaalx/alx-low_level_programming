#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_most_numbers - check the code
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
if ((c != 50) && (c != 52))
{
_putchar(c);
}
}
_putchar('\n');
}
