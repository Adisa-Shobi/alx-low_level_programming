#include "main.h"

/**
 *print_line - prints the char - n times
 *
 *@n: The number of - chars
 *Return: void
 */
void print_line(int n)
{
	int index = 0;

	if (n > 0)
	{
		while ( index < n)
		{
			_putchar('-');
			index++;
		}
	}
	_putchar('\n');
}
