#include "lists.h"

/**
 * add_nodeint_end - Appends a new node at the end of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @data: The integer value to be stored in the endNode.
 *
 * Return: If memory allocation fails, returns NULL.
 * Otherwise, returns the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int data)
{
	listint_t *endNode, *ptr;

	endNode = malloc(sizeof(listint_t));
	if (endNode == NULL)
		return (NULL);

	endNode->n = n;
	endNode->next = NULL;
	if (*head == NULL)
	{
		*head = endNode;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = endNode;
	}
	return (*head);
}
