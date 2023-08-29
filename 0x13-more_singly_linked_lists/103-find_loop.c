#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next; /* Move one step */
		fast = fast->next->next; /* Move two steps */

		/* If there's a loop, the slow and fast pointers will meet */
		if (slow == fast)
		{
			/* Reset slow to head and move both pointers at same pace */
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow); /* This is the starting point of the loop */
		}
	}

	return (NULL); /* No loop found */
}

