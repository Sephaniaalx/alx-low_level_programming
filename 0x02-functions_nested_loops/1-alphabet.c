#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - Entry point for printing lower case
 *
 * Return: returns 0 on success
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
return ();
}
