#include "main.h"

/**
 *print_rev - Prints a strint in reverse
 *
 *@s: String to be printed
 *Return: void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 *
 *@s: string
 *Return: int(lenght of s)
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
