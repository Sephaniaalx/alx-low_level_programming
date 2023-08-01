#include "lists.h"

/**
 * listint_len - main function that finds the number of elements
 * @h: pointer to list
 *
 * Return: the result
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
