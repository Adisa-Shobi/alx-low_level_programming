#include "main.h"
#include <stddef.h>

/**
 *set-bit - sets the bit at a given index to i
 *@n: pointer to unsigned long int
 *@index: the index to be set to 1
 *Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n |= (1 << index);
	return (1);
}
