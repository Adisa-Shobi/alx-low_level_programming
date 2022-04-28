#include "main.h"

/**
 *_sqrt_recursion - finds the square root of n
 *
 *@n: int
 *Return: integer square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - finds the square root of a number
 *@n: int
 *@s: number to be subtracted
 *Return: The sqareroot or -1 if not a perfect square
 */
int _sqrt(int n, int s)
{
	if (n <= 0)
	{
		if (n == 0)
			return ((s / 2));
		return (-1);
	}
	return (_sqrt(n - s, s + 2));
}
