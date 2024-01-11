#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value assigned to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Set the previous pointer of the new node to NULL */
	new_node->prev = NULL;

	/* Update the previous pointer of the current head if it exists */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);  /* Return the address of the new element */
}
