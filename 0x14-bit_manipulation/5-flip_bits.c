#include "main.h"
#include <stdlib.h>

/**
 *flip_bits - counts how may bits need to be flipped to match a certain number
 *
 *@n: int 1
 *@m: int 2
 *Return: Integer number of differences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int len = (sizeof(n) * 8), i;
	unsigned int count = 0;

	for (i = 0; i != len; i++)
	{
		count += ((n >> i) & 1) != ((m >> i) & 1);
	}
	return (count);
}
