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



	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
