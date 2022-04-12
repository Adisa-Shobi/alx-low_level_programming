#include "main.h"
#include <ctype.h>

/**
 *_isalpha - checks if char is an alphabetic character
 *@c: Parameter c is the charachter being checked
 *
 *Return: 1 if char is alphabetic, 0 otherwise
*/
int _isalpha(int c)
{
	int value = isalpha(c);

	if (value)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
