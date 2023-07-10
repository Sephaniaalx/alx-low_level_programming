#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main function
 * @argv: the string
 * @argc: the argument
 *
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
