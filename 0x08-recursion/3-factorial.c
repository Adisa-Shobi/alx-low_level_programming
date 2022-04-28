#include "main.h"

/**
 *factorial - Finds the factorial of numbers
 *
 *@n: positive integer
 *Return: int factorial of n
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 1 || n == 0)
		{
			return (1);
		}
		return (n * factorial(n -1));
	}
	else
		return (-1);
}
