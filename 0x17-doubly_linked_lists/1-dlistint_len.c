#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;  /* Move to the next node */
		num++;      /* Increment the count for each node */
	}

	return (num);  /* Return the total count */
}
