#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	/* Iterate through each element in the array */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		/* Free the memory for each key-value pair in the linked list */
		while (current)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}

	/* Free the array itself and the hash table structure */
	free(ht->array);
	free(ht);
}
