#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the head of,
 * the listint_t list to be freed.
 *
 * Description: Setting the head pointer to NULL after freeing the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *linkNode;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		linkNode = (*head)->next;
		free(*head);
		*head = linkNode;
	}
	*head = NULL;
}
