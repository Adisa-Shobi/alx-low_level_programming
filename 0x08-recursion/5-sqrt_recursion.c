#include "main.h"

/**
 *_sqrt_recursion - finds the square root of n
 *
 *@n: int
 *Return: integer square root of n
 */
int _sqrt_recursion(int n)
{
	int i;

	for (i = 1 ; n > 0 ; i += 2)
	{
		n -= i;
	}

	if (n == 0)
		return ((i / 2));
	else
		return (-1);
}
