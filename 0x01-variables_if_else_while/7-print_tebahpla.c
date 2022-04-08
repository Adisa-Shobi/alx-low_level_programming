#include <stdio.h>

/**
*main - Entry point
*
*Return: 0(Success)
*/
int  main(void)
{
	const int SIZE = 26;

	char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
			      'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
			      'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			      'y', 'z'};

	int index;

	for (index = (SIZE - 1) ; index >= 0 ; index--)
	{
		putchar(letters[index]);
	}
	putchar('\n');
	return (0);
}
