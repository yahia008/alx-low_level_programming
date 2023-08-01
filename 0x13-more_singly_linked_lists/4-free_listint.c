#include "lists.h"

/**
 * free_listint - free the memory allocated for a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *curr, *tempNode;

	curr = head;

	while (curr != NULL)
	{
		tempNode = curr->next;
		free(curr);
		curr = tempNode;
	}
}
