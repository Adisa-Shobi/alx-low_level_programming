#include "main.h"

/**
 *print_diagonal - prints diagonal using \ char
 *
 *@n: The length of the diagonal
 *Return: void
 */
void print_diagonal(int n)
{
	int index;

	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			index = 0;

			while (index < i)
			{
				_putchar(' ');
				index++;
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
