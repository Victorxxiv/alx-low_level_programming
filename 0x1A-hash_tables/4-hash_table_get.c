#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table to look into.
 * @key: The keey to look for.
 *
 * Return: Value associated with the key, or NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		/* If ht is NULL, key is NULL or empty string, return NULL. */
		return (NULL);
	}

	/* Hash the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search Linked List */
	current = ht->array[index];
	while (current != NULL)
	{
		/* Compare the key of the node with the provided key. */
		if (strcmp(current->key, key) == 0)
		{
			/* If a match is found, return the associated value. */
			return (current->value);
		}
		current = current->next;
	}

	/* If the key is not found in the linked list, return NULL. */
	return (NULL);
}

