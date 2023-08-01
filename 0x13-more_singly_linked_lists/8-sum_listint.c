#include "lists.h"

/**
 * sum_listint - Gets the total sum of all the,
 * integer data (n) in a listint_t linked list.
 * @head: A pointer to the head of the listint_t linked list.
 *
 * Return: If the linked list is empty, returns 0.
 * Otherwise, returns the sum of all the integer data.
 */

int sum_listint(listint_t *head)
{
	int Sum = 0;

	while (head != NULL)
	{
		Sum += head->n;
		head = head->next;
	}
	return (Sum);
}
