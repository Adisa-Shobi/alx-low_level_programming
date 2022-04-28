#include "main.h"

/**
 *_strlen_recursion - finds the length of a string using recursion
 *
 *@s: String being queried
 *Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion((s + 1)));
}
