#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: double pointer to argument
 *
 * Return: 0, if error, 1
 */

int main(int argc, char *argv[])
{
	int coins;
	int cents;
	int count;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		printf("0\n");
	}
	coins[] = {1, 2, 5, 10, 25};
	int num_coins = sizeof(coins) / sizeof(coins[0]);

	for (int i = 0; i < num_coins; i++)
	{
		count = count + cents / coins[i];
		cents = cents %= coins[i];
	}
	printf("%d\n", count);

	return (0);

}
