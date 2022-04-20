#include "main.h"

/**
 *_puts - Prints string to standard output
 *
 *@str: String to be printed
 *Return: void
 */
vois _puts(char *str)
{
	int i  = 0;

	while (*(str + i) != '\0')
		_putchar(*(str + i));
	_putchar('\n');
}
