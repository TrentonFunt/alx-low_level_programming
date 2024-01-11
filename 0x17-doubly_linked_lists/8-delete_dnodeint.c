#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a list.
 * @head: Pointer to the address of the head of the doubly linked list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL) /* Return -1 if the list is empty */
		return (-1);

	current = *head;

	/* Delete the first node if index is 0 */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);  /* Return 1 if deletion is successful */
	}

	/* Traverse the list to find the node at the given index */
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	temp = current->prev;
	temp->next = current->next;

	/* Update the previous pointer of the next node, if it exists */
	if (current->next != NULL)
		current->next->prev = temp;

	free(current);

	return (1);  /* Return 1 if deletion is successful */
}
