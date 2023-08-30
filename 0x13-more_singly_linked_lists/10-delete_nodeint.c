#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * in a listint_t list.
 * @head: A pointer to a pointer to the first node of the list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL) /* Empty list */
		return (-1);

	temp = *head;

	if (index == 0) /* Remove the first node */
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse to the node at index or the end of the list */
	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL) /* Node at index not found */
		return (-1);

	/* Update pointers to skip the node to be deleted */
	prev->next = temp->next;
	free(temp);

	return (1);
}

