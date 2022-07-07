#include "lists.h"

/**
 *add_dnodeint - Adds a node at the beggining of a singly linked list
 *@head: THe head of the list
 *@n: Data to be stored in the new node
 *Return: The address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
