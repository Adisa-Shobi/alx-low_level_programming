#include "main.h"

/**
*print_alphabet_x10 - Prints the alphabet in lower case times 10
*
*Return: void
*/
void print_alphabet_x10(void)
{
	const int TIMES = 10;

	int index = 0;

	while (index < TIMES)
	{
		for (c = 'a' ; c <= 'z'; ++c)
		{
			_putchar(c);
		}
		index++;
	}
	_putchar('\n');
}
