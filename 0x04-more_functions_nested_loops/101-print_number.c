#include "main.h"

/**
 *print_number - prints numbers using putchar
 *@n: Number to be printed
 *
 *Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
