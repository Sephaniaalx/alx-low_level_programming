#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: double pointer to the start of list
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = temp;

		return (data);
	}
	return (1);
}
