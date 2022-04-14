#include "main.h"

/**
 *print_numbers - Prints numbers 0 - 9
 *
 *Return: void
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
}
