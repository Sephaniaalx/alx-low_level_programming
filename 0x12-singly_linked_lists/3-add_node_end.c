#include "lists.h"
/**
 * add_node_end - Adds a new node
 * @head: A pointer to a pointer
 * @str: The string
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end_node = *head;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = new_node;
	}
	return (new_node);
}
