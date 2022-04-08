#include <stdio.h>

/**
*main - Entry point
*
*Return: 0(Success)
*/
int  main(void)
{
	const int SIZE = 16;

	char letters[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
			  'a', 'b', 'c', 'd', 'e', 'f'};

	int index;

	for (index = 0 ; index < SIZE ; index++)
	{
		putchar(letters[index]);
	}
	putchar('\n');
	return (0);
}
