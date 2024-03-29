#include "main.h"

/**
 * string_nconcat - function that concatenate
 * @s1: first string
 * @s2: second string
 * @n: byte limit
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_len = 0, s2_len = 0;
	char *ptr = NULL;

	if (!s1)
		;
	else
	{
		for (s1_len = 0; s1[s1_len]; s1_len++)
			;
	}
	if (!s2)
		;
	else
	{
		for (s2_len = 0; s2[s2_len]; s2_len++)
			;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}

	ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = *s1++;
	}
	while (n > 0)
	{
		ptr[i] = *s2++;
		n--, i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
