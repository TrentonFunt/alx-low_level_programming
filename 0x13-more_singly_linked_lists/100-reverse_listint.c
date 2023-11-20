#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;  /* Previous node in the reversed list */
	listint_t *current;      /* Current node being processed */

	while (*head != NULL)
	{
		current = (*head)->next;  /* Save the next node before reversing the link */
		(*head)->next = prev;     /* Reverse the link to the previous node */
		prev = *head;             /* Move to the next node in the reversed list */
		*head = current;          /* Move to the next node in the original list */
	}

	*head = prev; /* Point to the new first node (previously the last node) */

	return (*head);
}
