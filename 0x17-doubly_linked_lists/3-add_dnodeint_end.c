#include "lists.h"

/**
 *add_dnodeint_end - Adds a node at the end of a doubly linked list
 *@head: The head of the singly linked list
 *@n: The data stored in the new node
 *Return: A pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = *head;

	new = malloc(sizeof(new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (ptr == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr;
	return (new);
}
