#include "lists.h"

/**
 *print_dlistint - Prints the data in a doubly linked list
 *@h: Pointer to the head of the list
 *
 *Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);
	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
