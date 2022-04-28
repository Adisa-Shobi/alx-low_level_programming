#include "main.h"

/**
 *is_prime_number - checks if an int is a prime number
 *
 *@n: int
 *Return: 1(true) 0(false)
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (is_prime(n, 2));
	else
		return (0);
}

/**
 *is_prime - checks if n is a prime number
 *@d: divisor for each stack
 *@n: int number
 *Return: int
 */
int is_prime(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d > (n / 2))
		return (1);
	return (is_prime(n, d + 1));
}
