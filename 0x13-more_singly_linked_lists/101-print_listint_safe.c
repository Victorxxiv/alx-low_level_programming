#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head node of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head; /* Current node being traversed */
	size_t count = 0; /* Count of nodes printed */
	const listint_t *loop_start = NULL; /* Pointer to detect loops */

	while (current != NULL)
	{
		/* Print the address and value of the current node */
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* Check for a loop by comparing next node's address with loop_start */
		if (current->next >= loop_start)
		{
			/* Print loop starting node and break the loop */
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		/* Move to the next node */
		current = current->next;

		/* Set the loop start pointer to head to detect loops */
		loop_start = head;
	}

	return (count); /* Return the number of nodes printed */
}

