#include "main.h"
#include "2-strlen.c"

/**
 *puts2 - Prints evry other char of a str
 *
 *@str: The string input
 *Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str) - 1;
	for (i = 0 ; i <= len ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
