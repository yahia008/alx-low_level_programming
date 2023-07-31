#include "lists.h"

/**
 * listint_len - it gets all numbers of elements in linked list containing ints
 * @h: A pointer to  head of listint_t type
 *
 * Return: size_t, number of count.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
