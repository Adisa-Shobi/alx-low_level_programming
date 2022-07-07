#include "lists.h"

/**
 *delete_dnodeint_at_index - Deletes node at specified index
 *@head: The head of the list
 *@index: The specified index to be deleted
 *Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i = 0;

	if (index == 0 && ptr)
	{
		*head = ptr->next;
		if (ptr->next)
			ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}
	while (ptr)
	{
		if (i == index)
		{
			if (ptr->prev)
				ptr->prev->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}
