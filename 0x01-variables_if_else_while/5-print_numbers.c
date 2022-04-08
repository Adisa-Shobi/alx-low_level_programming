#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0(success)
 */
int main(void)
{
	const int SIZE = 10;

	int index;

	for (index = 0; index < SIZE ; index++)
	{
		putchar(index);
	}
	putchar('\n');
	return (0);
}
