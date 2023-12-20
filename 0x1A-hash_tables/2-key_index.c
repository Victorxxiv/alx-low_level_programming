#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table array.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Get the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Compute the index using the hash value and the sice of the array */
	return (hash_value % size);
}

