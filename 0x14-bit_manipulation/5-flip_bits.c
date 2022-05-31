#include "main.h"

/**
 *flip_bits - counts how may bits need to be flipped to match a certain number
 *
 *@n: int 1
 *@m: int 2
 *Return: Integer number of differences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num, i;
	unsigned int count = 0;

	num = n ^ m;
	for (i = 0; num > 1; i++)
	{
		if ((num & 1) == 1)
			count += 1;
		num = num >> 1;
	}
	return (count + num);
}
