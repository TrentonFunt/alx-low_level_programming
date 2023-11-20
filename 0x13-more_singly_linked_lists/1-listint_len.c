#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	/* Initialize a variable to count the number of nodes */
	size_t node_counter = 0;

	/* Traverse the list and count the nodes */
	while (h != NULL)
	{
		h = h->next; /* Move to the next node */
		node_counter++; /* Increment the node count */
	}

	return (node_counter);
}
