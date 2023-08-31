#include "main.h"

/**
 * get_bit - finds the value of a bit
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index, else, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* the bits number is depended on the datatype */
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
