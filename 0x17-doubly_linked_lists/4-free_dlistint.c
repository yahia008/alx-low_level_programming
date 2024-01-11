#include "lists.h"

/**
 * free_dlistint - Deallocates memory for a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
