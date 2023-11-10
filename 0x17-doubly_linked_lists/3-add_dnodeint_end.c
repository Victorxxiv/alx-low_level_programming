#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint list.
 * @head: Point to the pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
		return (NULL); /* Return NULL if malloc fails */

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, new node becomes the head */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		while (temp->next != NULL)
			temp = temp->next;

		/* Update pointers to insert the new node at the end */
		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}

