#include "lists.h"

/**
 * print_listint - prints the elements in linked list
 * @h: is a pointer to head of listint_t type
 *
 * Return: size_t, number of count.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
