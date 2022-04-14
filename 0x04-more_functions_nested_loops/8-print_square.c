#include "main.h"

/**
 *print_diagonal - prints square using # char
 *
 *@n: The length of the diagonal
 *Return: void
 */
void print_square(int n)
{
	int index;

	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			index = 0;

			while (index < n)
			{
				_putchar('#');
				index++;
			}
		_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
