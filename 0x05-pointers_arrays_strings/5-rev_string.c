#include "main.h"
#include "2-strlen.c"

/**
 *rev_string - Reverses strings
 *
 *@s: string being reversed
 *
 *Return: void
 */
void rev_string(char *s)
{
	int len;

	len = _strlen(s);
	int i;

	char p;

	for (i = 0 ; i <= (len / 2) ; i++)
	{
		p = *(s + i);
		*(s + i) = *(s + (len - i));
		*(s + (len - 1)) = p;
	}
}
