#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	* while (i < 10)
	* {
<<<<<<< HEAD
	* putchar('i');
	* i++;
=======
	* putchar(i);
>>>>>>> 9633af6a6063be9e8da5c7154a085112b9efc425
	* }
	*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
