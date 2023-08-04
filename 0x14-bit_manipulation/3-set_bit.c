#include "main.h"
/**
 * set_bit - main function that sets the value of a bit
 * @n: pointer to the number
 * @index: index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1 << index);
	return (1);
}
