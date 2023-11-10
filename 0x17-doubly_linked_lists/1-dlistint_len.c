#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - Return the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	/* Variable to keep track of the number of elements */
	size_t count = 0;

	/* Loop through the list and count elements */
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

