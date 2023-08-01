#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely, handling loops.
 * @h: Pointer to a pointer of a linked list.
 *
 * Return: The size of the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *runner, *node_to_free;
	size_t nodeCounter;

	nodeCounter = 0;

	if (!h || *h == NULL)
		return (0);
	runner = (*h)->next;
	curr = *h;

	while (runner && runner < curr)
	{
		node_to_free = curr;
		runner = runner->next;
		curr = curr->next;
		nodeCounter += 1;
		free(node_to_free);
	}
	nodeCounter += 1;
	free(curr);
	*h = NULL;

	return (nodeCounter);
}
