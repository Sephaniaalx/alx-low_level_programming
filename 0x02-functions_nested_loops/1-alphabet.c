#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: returns 0 on success
 */

int main(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
return (0);
}
