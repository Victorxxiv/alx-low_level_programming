#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node, starting at 0.
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize a count to keep track of the index */
	unsigned int count = 0;

	/* Initialize a pointer to traverse the list */
	listint_t *current = head;

	/* Traverse the list */
	while (current != NULL)
	{
		/* Check if the current index matches the desired index */
		if (count == index)
			return (current);

		/* Move to the next node and increment the count */
		current = current->next;
		count++;
	}

	/* Index out of range or list is shorter */
	return (NULL);
}

