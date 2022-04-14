#include "main.h"
#include <ctype.h>

/**
 *_isdigit - Checks if the parameter given is digit
 *
 *@c: The parameter to be chaecked
 *Return: 1(if within 0-9), 0(otherwise)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
