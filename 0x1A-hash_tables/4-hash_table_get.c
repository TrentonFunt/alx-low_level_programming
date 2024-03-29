#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || *key == '\0')
		return (NULL);

	/* Get the index where the key should be stored in the hash table array */
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Traverse the linked list at the index to find the key */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	/* Key not found */
	return (NULL);
}
