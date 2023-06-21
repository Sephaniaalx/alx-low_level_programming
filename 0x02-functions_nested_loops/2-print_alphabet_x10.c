#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - printing x10 of the alphabet in lower case
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int count;
char alphabet;

count = 0;
while (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
count++;
_putchar('\n');
}
}
