#include "lists.h"

/**
 *free_dlistint - frees a doubly linked list
 *@head: The head of the doubly linked list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
	{
		while (head)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
	}
}
