#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0(success)
 */
int main(void)
{
	const int SIZE = 10;

	int digits[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

	int index;

	for (index = 0 ; index < SIZE ; index++)
	{
		putchar(digits[index]);
		if (index <= 8)
		{
			putchar(",");
			putchar(" ");
		}
	 }
	return (0);
}
