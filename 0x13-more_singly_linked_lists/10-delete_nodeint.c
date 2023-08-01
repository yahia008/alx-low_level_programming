
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at the specified index.
 * @head: A pointer to the head of the listint_t linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: -1 if the index is  list is empty (0),
 * 1 upon successful deletion.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currNode, *tempNode;
	unsigned int node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tempNode = *head;
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}
	currNode = *head;
	for (node = 0; node < (index - 1); node++)
	{
		if (currNode->next == NULL)
			return (-1);
		currNode = currNode->next;
	}
	tempNode = currNode->next;
	currNode->next = tempNode->next;
	free(tempNode);
	return (1);
}
