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

	int last_digits[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

	int index;

	int index_2;

	int index_3;

	int index_4;

	for (index = 0 ; index < SIZE ; index++)
	{
		for (index_2 = 0 ; index_2 < SIZE ; index_2++)
		{
			for (index_3 = index ; index_3 < SIZE ; index_3++)
			{
				for (index_4 = index_2;
				     index_4 < SIZE ; index_4++)
				{
					if (!((index == 0) && (index_2 == 0) &&
					      (index_3 == 0) && (index_4 == 0)))
					{
						putchar(',');
						putchar(' ');
					}
					putchar(digits[index]);
					putchar(digits[index_2]);
					putchar(' ');
					putchar(digits[index_3]);
					putchar(last_digits[index_4]);
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
