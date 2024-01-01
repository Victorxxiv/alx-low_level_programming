#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s' : '%s'", current->key, current->value);

			/* Check if there is another node in the list */
			if (current->next != NULL)
				printf(", ");

			current = current->next;
		}
	}
	printf("}\n");
}

