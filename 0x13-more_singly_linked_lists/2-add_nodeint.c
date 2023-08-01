#include "lists.h"

/**
 * add_nodeint - Inserting a new node at the beginning of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @data: will be the integer value to be stored in the temp.
 *
 * Return: If memory allocation fails, returns NULL.
 * Otherwise, returns the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int data)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = data;
	temp->next = NULL;

	temp->next = *head;
	*head = temp;
	return (temp);
}
