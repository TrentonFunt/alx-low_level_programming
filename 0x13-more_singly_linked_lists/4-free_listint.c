#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp_p;

	while (head != NULL)
	{
		temp_p = head;
		head = head->next;
		free(temp_p);
	}
}
