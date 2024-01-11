#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;  /* Add the data of the current node to the sum */
		current = current->next;
	}

	return (sum); /* Return sum of all data */
}
