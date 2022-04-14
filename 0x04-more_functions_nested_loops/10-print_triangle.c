#include "main.h"

/**
 *print_triangle - prints diagonal using \ char
 *
 *@n: The size of the triangle
 *Return: void
 */
void print_triangle(int n)
{
	int index;

	int index_1;

	int i;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			index = 0;

			while (index < n - i)
			{
				_putchar(' ');
				index++;
			}
			index_1 = 1;

			while (index_1 <= i)
			{
				_putchar('#');
				index_1++;
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
