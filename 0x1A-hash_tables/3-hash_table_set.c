#include "hash_tables.h"

/**
 * hash_table_set - Adds element to the hash table.
 *
 * @ht: The hash table to add or update the key/value
 * @key: The key (Cannot be an empty string).
 * @value: The value associated with the key (duplicted, can be empty string).
 *
 * Return: 1 if it succeded, 0 if failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	/* Check for valid input parameters */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Calculate the index where the node should be inserted or updated */
	index = key_index((unsigned char *)key, ht->size);

	/* Check if the key already exists in the linked list at determined */
	current = ht->array[index];
	while (current != NULL)
	{
		/* If the key exists, update the value and return success */
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	/* If the key doesn't exist, create a new node, add to linked list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Duplicate the key */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	/* Duplicate the value */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Add the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

