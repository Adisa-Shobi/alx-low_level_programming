#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0(success)
 */
int main(void)
{
	const int SIZE = 10;

	int digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	int index;

	int index_2;

	for (index = 0 ; index < SIZE ; index++)
	{
		for (index_2 = index + 1 ; index_2 < SIZE ; index_2++)
		{
			putchar(digits[index]);
			putchar(digits[index_2]);
			if (index <= 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
