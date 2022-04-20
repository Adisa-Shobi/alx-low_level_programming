#include "main.h"
#include "2-strlen.c"
#include "3-puts.c"

/**
 *puts_half - prints the second half of a string
 *
 *@str: String subject
 *Return: void
 */
void puts_half(char *str)
{
	int len, half;

	len = _strlen(str);
	half = (len / 2);
	_puts(str[half..len];
}
