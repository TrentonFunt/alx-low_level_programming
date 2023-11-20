#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Allocate memory for the new node */
	listint_t *fresh_node = malloc(sizeof(listint_t));

	/* Check if malloc failed */
	if (fresh_node == NULL)
		return (NULL);

	/* Initialize the new node with the provided values */
	fresh_node->n = n;
	fresh_node->next = *head;

	/* Update the head to point to the new node */
	*head = fresh_node;

	return (fresh_node);
}
