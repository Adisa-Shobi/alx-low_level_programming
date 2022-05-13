#include <stdlib.h>

/**
 *print_name - prints a name with a given function
 *
 *@f: function that prints the name given
 *@name: Name to be printed
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		exit(89);
	}
	f(name);
}
