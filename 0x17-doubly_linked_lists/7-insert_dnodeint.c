#include "lists.h"

/**
 *insert_dnodeint_at_index - Inserts a node at specified index
 *@n: The data stored in node
 *@idx: Index to store the new node
 *@h: Head of the list
 *Return: A pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	while (ptr)
	{
		if (i == idx)
		{
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev->next = new;
			ptr->prev = new;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}
	if (idx == i)
	{
		free(new);
		new = add_dnodeint_end(h, n);
		return (new);
	}
	free(new);
	return (NULL);
}
