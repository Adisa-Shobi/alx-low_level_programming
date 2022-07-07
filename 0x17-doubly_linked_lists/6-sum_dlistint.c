#include "lists.h"

/**
 *sum_dlistint - Sums all the integers in a doubly linked list
 *
 *@head: Head of list
 *Return: the sum, or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
