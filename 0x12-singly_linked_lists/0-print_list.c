#include "lists.h"
/**
 * print_list - main function
 *
 * @h: Pointer
 *
 * Return: The number of nodes in the list
 **/
size_t print_list(const list_t *h)
{
	size_t number_nodes = 0;

	/* trasversing the list */
	while (h != NULL)
	{
		/* the function checks if the str field is NULL */
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		/* increment this variable for each node in the list */
		number_nodes++;
		h = h->next;
	}
	return (number_nodes);
}
