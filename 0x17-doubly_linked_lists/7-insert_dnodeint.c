#include "lists.h"

/**
 * create_node - Creates a new node with given value.
 * @n: Value to be assigned to the new node.
 *
 * Return: The address of the new node.
 */
static dlistint_t *create_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts new node at a given position in list.
 * @h: Pointer to the address of the head of the doubly linked list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be assigned to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp != NULL && count < idx)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL && count < idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp;
	new_node->prev = (temp != NULL) ? temp->prev : NULL;

	if (temp != NULL)
	{
		if (temp->prev != NULL)
			temp->prev->next = new_node;
		temp->prev = new_node;
	}

	if (count == 0)
		*h = new_node;

	return (new_node);
}
