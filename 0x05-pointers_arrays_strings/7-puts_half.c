#include "main.h"
#include "2-strlen.c"

/**
 *puts_half - prints the second half of a string
 *
 *@str: String subject
 *Return: void
 */
void puts_half(char *str)
{
	int i, len;

	len = (_strlen(str) - 1);
	for (i = (len / 2) ; i <= len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
