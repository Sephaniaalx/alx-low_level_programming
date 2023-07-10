#include <stdlib.h>
#include <stdio.h>

/**
 * main - function
 * @argc: count
 * @argv: argument passed
 *
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
