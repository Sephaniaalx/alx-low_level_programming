#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * more_numbers - prints 10x a number
 *
 * Return: nothing
 */
void more_numbers(void)
{
int count;
int i;

count = 0;
while (count < 10)
{
for (i = '0'; i < 14; i++)
{

if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
}
_putchar('\n');
count++;
}

