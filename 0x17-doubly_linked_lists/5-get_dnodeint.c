#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the node at a specified index
 *@head: Head of doubly linked list
 *@index: Specified index
 *Return: The node at index, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
