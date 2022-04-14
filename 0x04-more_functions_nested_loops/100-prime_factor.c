#include <stdio.h>
void largest_prime_factor(long int n);
int is_prime(long int c);
/**
 *main - Entry point
 *
 *
 *Return: 0(success)
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

/**
 *largest_prime_factor - Returns largest prime factor of a number
 *
 *@n: Number to be checked
 *Return: void
 */
void largest_prime_factor(long int n)
{
	long int index;

	for (index = n ; index > 0 ; index--)
		if ((n % index) == 0 && is_prime(index))
		{
			printf("%ld", index);
			putchar('\n');
			break;
		}
}

/**
 *is_prime - Checks if c is prime
 *
 *@c: Number to be checked
 *Return: 0(if c is not prime), 1(if c is prime)
 */
int is_prime(long int c)
{
	long int range;

	for (range = 2 ; range < c ; range++)
	{
		if (c % range == 0)
			return (0);
	}
	return (1);
}
