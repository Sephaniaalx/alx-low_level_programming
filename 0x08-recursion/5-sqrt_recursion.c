#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - the function that returns the natural square root
 * @n: the number
 *
 * Return: returns -1 when not natural number
 */
int _sqrt_recursion(int n)
{
	return (_recursion_calc(n, 1));
}

/**
 * _recursion_calc - helper function to compute square root
 * @n: number
 * @num: square root
 *
 * Return: result
 */
int _recursion_calc(int n, int num)
{
		if (num * num == n)
		{
			return (num);
		}
		if (num * num > n)
		{
			return (-1);
		}
		return (_recursion_calc(n, num + 1));
}
