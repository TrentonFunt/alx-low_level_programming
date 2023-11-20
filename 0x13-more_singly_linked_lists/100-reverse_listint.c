#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* Previous node in the reversed list */
	listint_t *next; /* Next Node to be worked */

	while (current != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	 /* Update the head to point to the new first node(previ last node */
	*head = prev;

	return (*head);
}
