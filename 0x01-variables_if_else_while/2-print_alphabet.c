#include <stdio.h>

/**
*main - Entry point
*
*Return: 0(Success)
*/
int  main(void)
{
	const int SIZE = 26;

	char letters[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
			      'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
			      'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			      'y', 'z'};

	for (index = 0 ; index <= SIZE ; index++)
	{
		putchar(letters[index])
	}
	return (0);
}
