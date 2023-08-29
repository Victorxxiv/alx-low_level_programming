#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head node of the linked list.
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* Initialize a variable to count elements */

	/* Traverse the linked list */
	while (h != NULL)
	{
		h = h->next; /* Move to the next node */
		count++; /* Increment the count */
	}

	return (count); /* Return the total number of elements */
}

