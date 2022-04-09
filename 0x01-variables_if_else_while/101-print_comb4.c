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

	int index_3;
	
	for (index = 0 ; index < SIZE ; index++)
	{
		for (index_2 = index + 1 ; index_2 < SIZE ; index_2++)
		{
			for (index_3 = index_2 + 1 ; index_3 < SIZE ; index_3++)
			{
				if (index_3 != 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(digits[index]);
				putchar(digits[index_2]);
				putchar(digits[index_3]);
			}
		}

	}
	putchar('\n');
	return (0);
}
