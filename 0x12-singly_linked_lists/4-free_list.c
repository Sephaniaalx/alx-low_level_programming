#include "lists.h"
/**
 * free_list - Main function that frees up the linked list
 * @head: Pointer
 *
 * Description: This function frees all the nodes of a linked list_t list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
