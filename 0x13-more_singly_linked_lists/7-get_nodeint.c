#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	/* Iterate through the list */
	for (j = 0; j < index && head != NULL; j++)
		head = head->next;

	/* If the node exists at the specified index, return it */
	if (j == index)
		return (head);

	/* If the node does not exist at the specified index, return NULL */
	return (NULL);
}
