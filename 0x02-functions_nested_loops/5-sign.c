#include "main.h"

/**
 *print_sign - prints the sign of a number
 *
 *@n: int being checked
 *
 *Return: 1(if n greater than 0), 0(n equlas 0, -1(n less that 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
