#include "lists.h"

/**
 * free_listint2 - main function which free  a listint_t list
 * @head: double pointer to the start of list
 *
 * Description: frees a listint_t list and sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL, *next = NULL;

	if (head)
	{
		temp = *head;
		while (temp)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
		*head = NULL;
	}
	head = NULL;
}
