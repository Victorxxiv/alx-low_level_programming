#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer of the head node of the linked list.
 * @n: Integer value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* Declare a new node */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head; /* Set the new node's next pointer */

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node); /* Return the address of the new element */
}

