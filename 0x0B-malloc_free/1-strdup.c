#include "main.h"

/**
 * _strdup - the main function
 * @str: the string
 *
 * Return: Null
 */
char *_strdup(char *str)
{
	char *point;
	int length;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length]; length++)
	point = malloc(sizeof(char) * (length + 1));
	if (!point)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		point[i] = str[i];
	}
	point[i] = '\0';
	return (point);
}
