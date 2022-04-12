#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number
 *
 *@n: Integer subject
 *
 *Return: last digit of int n
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = (n * -1);
	_putchar(n);
	int last_digit = n % 10;

	return (last_digit);
}
