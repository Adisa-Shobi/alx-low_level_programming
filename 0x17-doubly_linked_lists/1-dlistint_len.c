#include "lists.h"

/**
 *dlistint_len - Retrurn the number of elements in a linked list
 *@h: The head of the linked list
 *Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
