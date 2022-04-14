#include "main.h"
#include <ctype.h>

/**
 *_isupper - Checks if the number given is upper case
 *
 *@c: The parameter to be chaecked
 *Return: 1(if uppercase), 0(otherwise)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
