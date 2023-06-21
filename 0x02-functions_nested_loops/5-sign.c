#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_sign - the function printing the signs
 *
 * @n: it takes the argument
 *
 * Return: 1 and 0
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
