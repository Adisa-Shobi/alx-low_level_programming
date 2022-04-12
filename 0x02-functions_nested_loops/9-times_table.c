#include "main.h"

/**
*times_table - Returns the nine times table
*
*Return: void
*
*/
void times_table(void)
{
	int multiples;

	int product;

	int num;

	for (multiples = 0 ; multiples <= 9 ; multiples++)
	{
		for (num = 0; num <= 9 ; num++)
		{
			product = (multiples * num);
			if (product > 9)
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
