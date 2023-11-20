#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description: This function iterates through the list, freeing each node,
 * and then sets the head to NULL to indicate an empty list.
 */
void free_listint2(listint_t **head)
{
	/* Temporary pointer to hold the current node */
	listint_t *temp;

	/* Check if the head pointer or the list is already empty */
	if (head == NULL || *head == NULL)
		return;

	/* Iterate through the list and free each node */
	while (*head != NULL)
	{
		/* Save the current node in the temporary pointer */
		temp = *head;

		/* Move the head pointer to the next node */
		*head = (*head)->next;

		/* Free the current node */
		free(temp);
	}

	/* Set the head pointer to NULL to indicate an empty list */
	*head = NULL;
}
