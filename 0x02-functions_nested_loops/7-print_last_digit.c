#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_last_digit - function thats prints LD
 *
 * Return: returns an int
 */

int print_last_digit(int n)

{
int last_digit;

if (n < 0)
{
last_digit = (-1 * (n % 10));
_putchar (last_digit + '0');
return (last_digit);
}

else
{
last_digit = (n % 10);
_putchar (last_digit + '0');
return (last_digit);
}

}
