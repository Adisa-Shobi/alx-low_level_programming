#include "main.h"
#include <stdlib.h>

/**
 *get_bit - gets the value of the bit at a given index
 *@n: unsigned long int value
 *@index: unsigned int index
 *Return: the integer at said index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = (n >> index);
	return (i & 1);
}
