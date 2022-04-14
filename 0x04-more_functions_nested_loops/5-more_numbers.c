#include "main.h"
void pr_int(int c);
/**
 *more_numbers - prints 10 times the numbers 0 - 14
 *
 *
 *Return: void
 */
void more_numbers(void)
{
	int times = 0;

	int index;

	while (times < 10)
	{
		for (index = 0 ; index <= 14 ; index++)
			pr_int(index);
		_putchar('\n');
		times++;
	}
}

/**
 *pr_int - prints integers using putchar
 *
 *@c: integer to be printed
 *Return: void
 */
void pr_int(int c)
{
	if (c < 0)
	{
		_putchar('-');
		c = -c;
	}

	if (c / 10)
		pr_int(c / 10);

	_putchar(c % 10 + '0');
}
