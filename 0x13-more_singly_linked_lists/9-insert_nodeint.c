#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given pos in the list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index of the list where the new node should be added. Starts at 0.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *fresh_node, *temp;

	/* Allocate memory for the new node */
	fresh_node = malloc(sizeof(listint_t));
	if (fresh_node == NULL)
		return (NULL);

	/* Set the data of the new node */
	fresh_node->n = n;

	/* If the index is 0, insert at the beginning of the list */
	if (idx == 0)
	{
		fresh_node->next = *head;
		*head = fresh_node;
		return (fresh_node);
	}

	/* Iterate to the node before the desired index */
	temp = *head;
	for (j = 0; j < idx - 1 && temp != NULL; j++)
		temp = temp->next;

	/* If it is not possible to add the new node at the spec index, return NULL */
	if (temp == NULL)
	{
		free(fresh_node);
		return (NULL);
	}

	/* Insert the new node at the specified index */
	fresh_node->next = temp->next;
	temp->next = fresh_node;

	return (fresh_node);
}
