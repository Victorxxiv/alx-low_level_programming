#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it with
 * a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if size is 0
 * or memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	/* Check if size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	/* Initialize each element of the array with the specified character */
	for (i = 0; i < size; i++)
		array[i] = c;

	/* Return a pointer to the created and initialized array */
	return (array);
}

