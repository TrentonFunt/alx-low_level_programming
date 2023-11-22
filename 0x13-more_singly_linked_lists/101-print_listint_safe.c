#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t counter = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		/* Check if the next pointer points to a node already printed */
		if (current <= current->next)
		{
			fprintf(stderr, "-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		current = current->next;
		counter++;
	}

	return (counter);
}
