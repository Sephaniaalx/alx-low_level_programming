#include "lists.h"
/**
 * list_len - Main function
 * @h: A pointer
 *
 * Return: The number
 */
size_t list_len(const list_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		number_nodes++;
		h = h->next;
	}
	return (number_nodes);
}
