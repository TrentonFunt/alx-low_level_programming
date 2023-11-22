#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t countn = 0;

	while (current != NULL)
	{
		/* Next pointer saved before freeing current node */
		next = current->next;

		/* Free the current node */
		free(current);

		/* Move to the next node in the list */
		current = next;
		countn++;
	}

	/* Set the head to NULL after freeing the entire list */
	*h = NULL;

	return (countn);
}
