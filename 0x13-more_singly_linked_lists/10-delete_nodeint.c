#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Del the node at 'index' of listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int q;
	listint_t *temp, *previ;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	/* If the node to be deleted is head, move the head to the next node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Iterate to the node before the desired index */
	previ = *head;
	for (q = 0; q < index - 1 && previ != NULL; q++)
		previ = previ->next;

	/* If not possible to del the node at the specified index, return -1 */
	if (previ == NULL || previ->next == NULL)
		return (-1);

	/* Delete the node at the specified index */
	temp = previ->next;
	previ->next = temp->next;
	free(temp);

	return (1);
}
