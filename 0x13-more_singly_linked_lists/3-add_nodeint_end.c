#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Allocating memory for the new node */
	listint_t *fresh_node = malloc(sizeof(listint_t));
	listint_t *fin_node = *head;

	/* Check if malloc failed */
	if (fresh_node == NULL)
		return (NULL);

	/* Initialize the new node with the provided values */
	fresh_node->n = n;
	fresh_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = fresh_node;
		return (fresh_node);
	}

	/* Otherwise, traverse the list to find the last node */
	while (last_node->next != NULL)
		fin_node = fin_node->next;

	/* Update the last node to point to the new node */
	fin_node->next = fresh_node;

	return (fresh_node);
}
