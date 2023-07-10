#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the function
 * @argc: count
 * @argv: the argument
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 2)
	{
		while (argc != 1)
		{
			for (i = 0; argv[argc - 1][i]; i++)
			{
				if (!isdigit(argv[argc - 1][i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[argc - 1]);
			argc--;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
