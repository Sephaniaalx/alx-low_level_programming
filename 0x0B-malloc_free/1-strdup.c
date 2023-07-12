#include "main.h"

/**
 * _strdup - the main function
 * @str: the string
 *
 * Return: Null
 */
char *_strdup(char *str)
{
	char *_strdup(char *str)
{
	char *point = NULL;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++);

	point = malloc(sizeof(char) * (i + 1));

	if (!point)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		point[j] = str[j];
	}
	point[j] = '\0';

	return (point);
}
}
