#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _abs - function that prints absolute value
 * @n: this is the argument
 *
 * Return: 0
 *
 */

int _abs(int n)
{

if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);
}

}
