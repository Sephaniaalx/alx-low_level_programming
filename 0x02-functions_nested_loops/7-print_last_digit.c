#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_last_digit - function thats prints LD
 *
 * Return: returns an int
 */

int print_last_digit(int)
{
int last_digit = number % 10;

if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar(last_digit = '0');
_putchar('\n');
}
