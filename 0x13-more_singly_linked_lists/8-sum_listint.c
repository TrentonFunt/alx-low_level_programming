#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum_data;

	sum_data = 0;

	/* Iterate through the list and accumulate the sum */
	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
