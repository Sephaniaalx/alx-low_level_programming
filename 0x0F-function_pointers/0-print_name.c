#include "function_pointers.h"

/**
 * print_name - the main function
 * @name: the array
 * @f: a function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
