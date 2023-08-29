#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t linked list.
 * @h: Pointer to the head node of the linked list.
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0; /* Initialize a variable to count nodes */

	/* Traverse the linked list */
	while (h != NULL)
	{
		printf("%d\n", h->n); /* Print the current node's value */
		h = h->next; /* Move to the next node */
		count++; /* Increment the count */
	}

	return (count); /* Return the total number of nodes */
}

