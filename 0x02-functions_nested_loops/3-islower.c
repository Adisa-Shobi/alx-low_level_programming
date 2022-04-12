#include "main.h"
#include <ctype.h>

/**
 *_islower - checks if char is lowercase
 *
 *Return: 1 if char is lowercase, 0 otherwise
*/
int _islower(int c)
{
	int value = islower(c);

	if (value)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
