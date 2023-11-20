#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tempp;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Save the data of the head node */
	data = (*head)->n;

	/* Save the head node in a temporary pointer */
	tempp = *head;

	/* Move the head pointer to the next node */
	*head = (*head)->next;

	/* Free the original head node */
	free(tempp);

	return (data);
}
