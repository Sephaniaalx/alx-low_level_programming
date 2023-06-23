#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_numbers - prints 0 - 9 and followed by a new line
 * Return:nothing
 */
void print_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
_putchar(c);
}
_putchar('\n');
}
